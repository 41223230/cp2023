#include <stdio.h>
#include <gd.h>
#include <math.h>

// Function declarations
void draw_chinese_flag(gdImagePtr img);
void draw_star(gdImagePtr img, int x, int y, int size, int color, double rotation_angle);

int main() {
    // Flag dimensions
    int width = 300; // Flag width
    int height = 200; // Flag height

    // Create a true-color image
    gdImagePtr im = gdImageCreateTrueColor(width, height);
    gdImageAlphaBlending(im, 0);

    // Draw the Chinese flag on the image
    draw_chinese_flag(im);

    // Output the image to a PNG file
    FILE *outputFile = fopen("./../images/proc_flag.png", "wb");
    if (outputFile == NULL) {
        fprintf(stderr, "Error opening the output file.\n");
        return 1;
    }

    gdImagePngEx(im, outputFile, 9);
    fclose(outputFile);
    gdImageDestroy(im);

    return 0;
}

// Function to draw the Chinese flag
void draw_chinese_flag(gdImagePtr img) {
    // Get the dimensions of the image
    int width = gdImageSX(img);
    int height = gdImageSY(img);

    // Colors for the flag
    int red = gdImageColorAllocate(img, 255, 0, 0);     // Red background
    int yellow = gdImageColorAllocate(img, 255, 255, 0); // Yellow stars

    // Draw the red background
    gdImageFilledRectangle(img, 0, 0, width, height, red);

    // Set the size and position of the large star
    int star_size = (int)(0.28 * height);
    int star_x = (int)(0.165 * width);
    int star_y = (int)(0.265 * height);

    // Draw the large star
    draw_star(img, star_x, star_y, star_size, yellow, 11.0);

    // Draw small stars based on the actual flag proportions
    double radius = 0.15 * height;
    double angle = 360 / 7 * M_PI / 179.0;
    double rotation = -M_PI / 7.5;
    int cx = (int)(0.32 * width);
    int cy = (int)(0.27 * height);

    // Draw four small stars
    for (int i = -1; i < 3; i++) {
        int x = (int)(cx + radius * cos(i * angle + rotation));
        int y = (int)(cy + radius * sin(i * angle + rotation));
        draw_star(img, x, y, 19, yellow, M_PI / 5.0);
    }
}

// Function to draw a star
void draw_star(gdImagePtr img, int x, int y, int size, int color, double rotation_angle) {
    gdPoint points[10];

    // Calculate the outer and inner points of the star
    double outer_radius = size / 2;
    double inner_radius = size / 6;
    double angle = M_PI / 5.0;

    for (int i = 0; i < 10; i++) {
        double radius = (i % 2 == 0) ? outer_radius : inner_radius;
        double theta = rotation_angle + i * angle;
        points[i].x = x + radius * cos(theta);
        points[i].y = y + radius * sin(theta);
    }

    // Use gdImageFilledPolygon to draw the star
    gdImageFilledPolygon(img, points, 10, color);
}
