#include <stdio.h>
#include <gd.h>
#include <gdfonts.h>

void drawJapaneseFlag() {
    int flagWidth = 300;
    int flagHeight = 200;

    gdImagePtr img;
    FILE *pngout; // Corrected the FILE pointer declaration

    img = gdImageCreateTrueColor(flagWidth, flagHeight);

    // 設置白色背景
    int white = gdImageColorAllocate(img, 255, 255, 255);
    gdImageFill(img, 0, 0, white);

    // 設置紅色
    int red = gdImageColorAllocate(img, 255, 0, 0);

    // 繪製紅色圓圈
    int circleRadius = 50;
    int circleCenterX = flagWidth / 2;
    int circleCenterY = flagHeight / 2;

    gdImageFilledEllipse(img, circleCenterX, circleCenterY, circleRadius * 2, circleRadius * 2, red); // Corrected the ellipse dimensions

    // 輸出 PNG 文件
    pngout = fopen("japanese_flag.png", "wb");
    gdImagePng(img, pngout);

    // 釋放內存
    gdImageDestroy(img);
    fclose(pngout);
}

int main() {
    drawJapaneseFlag();
    return 0;
}

