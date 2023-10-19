// https://en.wikipedia.org/wiki/Flag_of_the_United_States
// https://www.britannica.com/topic/flag-of-the-United-States-of-America
// 以下為幾乎要繪製完成的美國國旗, 請修改下列原始碼, 令其繪出正確的美國國旗
#include <stdio.h>
#include <gd.h>
#include <math.h>

void draw_usa_flag(gdImagePtr img);
void draw_star(gdImagePtr img, int x, int y, int size, int color);

int main() {
    int width = 800;
    int height = (int)(width / 1.9);

    gdImagePtr img = gdImageCreateTrueColor(width, height);
    gdImageAlphaBlending(img, 0);

    draw_usa_flag(img);

    FILE *outputFile = fopen("./../images/usa_flag.png", "wb");
    if (outputFile == NULL) {
        fprintf(stderr, "Error opening the output file.\n");
        return 1;
    }

    gdImagePngEx(img, outputFile, 9);
    fclose(outputFile);
    gdImageDestroy(img);

    return 0;
}

void draw_usa_flag(gdImagePtr img) {
    int width = gdImageSX(img);
    int height = gdImageSY(img);
    int red, white, blue;
    // Colors for the flag
    red = gdImageColorAllocate(img, 178, 34, 52); // Red stripes
    white = gdImageColorAllocate(img, 255, 255, 255); // White stripes
    blue = gdImageColorAllocate(img, 60, 59, 110); // Blue field

    int stripe_height = height / 13;
    int stripe_width = width;
    int star_size = (int)(0.0308 * height); // Corrected star size (half the original size)

    for (int y = 0; y < height; y += stripe_height) {
        if (y / stripe_height % 2 == 0) {
            gdImageFilledRectangle(img, 0, y, stripe_width, y + stripe_height, red);
        } else {
            gdImageFilledRectangle(img, 0, y, stripe_width, y + stripe_height, white);
        }
    }

    gdImageFilledRectangle(img, 0, 0, width * 2 / 5, stripe_height * 7, blue);

    int star_spacing_x = (int)(0.063 * height); // Horizontal spacing between stars
    int star_spacing_y = (int)(0.054 * height); // Vertical spacing between stars
    int star_start_x = (int)(0.0616 * height); // Starting X position for stars
    int star_start_y = (int)(0.0485 * height); // Starting Y position for stars

    for (int row = 0; row < 9; row++) {
        int starsPerRow = (row % 2 == 0) ? 6 : 5;

        for (int star = 0; star < starsPerRow; star++) {
            int x = star_start_x + star * star_spacing_x;
            int y = star_start_y + row * star_spacing_y;
            draw_star(img, x, y, star_size, white);
        }
    }
}

void draw_star(gdImagePtr img, int x, int y, int size, int color) {
    gdPoint points[10];

    for (int i = 0; i < 10; i++) {
        double angle = M_PI / 2 + i * 2 * M_PI / 10;
        int radius = (i % 2 == 0) ? size : size / 2;
        points[i].x = x + radius * cos(angle);
        points[i].y = y + radius * sin(angle);
    }

    // Fill the star with white color
    gdImageFilledPolygon(img, points, 10, color);
}
