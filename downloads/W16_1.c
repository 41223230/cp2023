#include <stdio.h>
#include <gd.h>

// Function to draw the mass-spring-damper system
void draw_system(const char* filename) {
    int width = 600;
    int height = 300;
    int x_margin = 50;
    int y_margin = 50;
    int mass_radius = 20;
    int spring_width = 4;
    int damper_width = 4;

    gdImagePtr img = gdImageCreate(width, height);
    int background_color = gdImageColorAllocate(img, 255, 255, 255);
    int mass_color = gdImageColorAllocate(img, 0, 0, 0);
    int spring_color = gdImageColorAllocate(img, 0, 0, 0);
    int damper_color = gdImageColorAllocate(img, 0, 0, 0);
    int wall_color = gdImageColorAllocate(img, 0, 0, 0);

    // Draw left wall
    gdImageLine(img, x_margin, y_margin, x_margin, height - y_margin, wall_color);

    // Draw mass 1
    int x1 = x_margin + 2 * mass_radius;
    int y1 = height / 2;
    gdImageFilledEllipse(img, x1, y1, mass_radius, mass_radius, mass_color);

    // Draw spring 1
    int spring1_start_x = x_margin;
    int spring1_end_x = x1 - mass_radius;
    int spring1_y = y1;
    gdImageLine(img, spring1_start_x, spring1_y, spring1_end_x, spring1_y, spring_color);
    gdImageSetThickness(img, spring_width);
    gdImageLine(img, spring1_start_x, spring1_y, spring1_end_x, spring1_y, spring_color);
    gdImageSetThickness(img, 1);

    // Draw damper 1
    int damper1_start_x = x_margin / 2;
    int damper1_end_x = x1 - mass_radius;
    int damper1_y = y1;
    gdImageLine(img, damper1_start_x, damper1_y, damper1_end_x, damper1_y, damper_color);
    gdImageSetThickness(img, damper_width);
    gdImageLine(img, damper1_start_x, damper1_y, damper1_end_x, damper1_y, damper_color);
    gdImageSetThickness(img, 1);

    // Draw mass 2
    int x2 = width - x_margin - 2 * mass_radius;
    int y2 = height / 2;
    gdImageFilledEllipse(img, x2, y2, mass_radius, mass_radius, mass_color);

    // Draw spring 2
    int spring2_start_x = x2 + mass_radius;
    int spring2_end_x = width - x_margin;
    int spring2_y = y2;
    gdImageLine(img, spring2_start_x, spring2_y, spring2_end_x, spring2_y, spring_color);
    gdImageSetThickness(img, spring_width);
    gdImageLine(img, spring2_start_x, spring2_y, spring2_end_x, spring2_y, spring_color);
    gdImageSetThickness(img, 1);

    // Draw damper 2
    int damper2_start_x = width - x_margin + mass_radius;
    int damper2_end_x = x2 + mass_radius;
    int damper2_y = y2;
    gdImageLine(img, damper2_start_x, damper2_y, damper2_end_x, damper2_y, damper_color);
    gdImageSetThickness(img, damper_width);
    gdImageLine(img, damper2_start_x, damper2_y, damper2_end_x, damper2_y, damper_color);
    gdImageSetThickness(img, 1);

    // Draw right wall
    gdImageLine(img, width - x_margin, y_margin, width - x_margin, height - y_margin, wall_color);

    // Save the image to a file
    FILE *output_file = fopen(filename, "wb");
    gdImagePng(img, output_file);
    fclose(output_file);

    // Free the memory used by the image
    gdImageDestroy(img);
}

int main() {
    draw_system("mass_spring_damper_system.png");
    return 0;
}