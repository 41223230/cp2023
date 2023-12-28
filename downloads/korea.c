#include <stdio.h>
#include <gd.h>
#include <math.h>

#define WIDTH 900
#define HEIGHT 600
#define FILENAME "south_korea_flag.png"

int main() {
    gdImagePtr im;
    FILE *pngout;
    int white, black, red, blue;

    im = gdImageCreate(WIDTH, HEIGHT);

    white = gdImageColorAllocate(im, 255, 255, 255);
    black = gdImageColorAllocate(im, 0, 0, 0);
    red = gdImageColorAllocate(im, 205, 0, 0);
    blue = gdImageColorAllocate(im, 0, 56, 168);

    // Background (white)
    gdImageFilledRectangle(im, 0, 0, WIDTH, HEIGHT , white);

    // Blue Circle (Yin-Yang Symbol)
    gdImageFilledArc(im, WIDTH / 2, HEIGHT / 2, WIDTH / 3, HEIGHT / 2, 210, 30, red, gdArc);

    // Red Circle (Yin-Yang Symbol)
    gdImageFilledArc(im, WIDTH / 2, HEIGHT / 2, WIDTH / 3, HEIGHT / 2, 30, 210, blue, gdArc);

  int circleX = 385;    // 圓心的 X 座標
  int circleY = 262.5;   // 圓心的 Y 座標
  int circleRadius = 75;     

  // 繪製圓形
  gdImageFilledEllipse(im, circleX, circleY, circleRadius * 2, circleRadius * 2, red);

  int circleX2 = 515;    // 圓心的 X 座標

 int circleY2 = 337.5;

  // 繪製圓形
  gdImageFilledEllipse(im, circleX2, circleY2, circleRadius * 2, circleRadius * 2, blue);

  {


  // 起點和終點位置

  int startX = 340;    
  // 線的起點 X 座標

  int startY = 90;   
  // 線的起點 Y 座標

  int endX = 200;     
  // 線的終點 X 座標

  int endY = 260;     
  // 線的終點 Y 座標

  int lineWidth = 23;  // 線的寬度

  // 繪製線段
  gdImageSetThickness(im, lineWidth);
  gdImageLine(im, startX, startY, endX, endY, black);
  // 繪製線段
  gdImageSetThickness(im, lineWidth);
  gdImageLine(im, startX -35, startY -10, endX -35, endY -10, black);

  // 繪製線段
  gdImageSetThickness(im, lineWidth);
  gdImageLine(im, startX -70, startY -20, endX -70, endY -20, black);

  int startX2 = 213;    
  // 線的起點 X 座標

  int startY2 = 270;   
  // 線的起點 Y 座標

  int endX2 = 133;     
  // 線的終點 X 座標

  int endY2 = 210;     
  // 線的終點 Y 座標

  int lineWidth2 = 25;  // 線的寬度

  // 繪製線段
  gdImageSetThickness(im, lineWidth);
  gdImageLine(im, startX2 +3, startY2, endX2 +3, endY2, white);

  gdImageSetThickness(im, lineWidth +10);
gdImageLine(im, startX2 -17, startY2 +9 , endX2 -17, endY2 +9 , white);

  gdImageSetThickness(im, lineWidth );
gdImageLine(im, startX2 +115, startY2 -145, endX2 +115, endY2 -145, white);

  gdImageSetThickness(im, lineWidth);
gdImageLine(im, startX2 +120, startY2 -155, endX2 +120, endY2 -155, white);

  gdImageSetThickness(im, lineWidth +12);
gdImageLine(im, startX2 +145, startY2 -155, endX2 +145, endY2 -155, white);
}
  {
    // 起點和終點位置

  int startX = 330;    
  // 線的起點 X 座標

  int startY = 520;   
  // 線的起點 Y 座標

  int endX = 190;     
  // 線的終點 X 座標

  int endY = 350;     
  // 線的終點 Y 座標

  int lineWidth = 23;  // 線的寬度

  // 繪製線段
  gdImageSetThickness(im, lineWidth);
  gdImageLine(im, startX, startY, endX, endY, black);
  // 繪製線段
  gdImageSetThickness(im, lineWidth);
  gdImageLine(im, startX -35, startY +10, endX -35, endY +10, black);

  // 繪製線段
  gdImageSetThickness(im, lineWidth);
  gdImageLine(im, startX -70, startY +20, endX -70, endY +20, black);

  int startX2 = 213;    
  // 線的起點 X 座標

  int startY2 = 330;   
  // 線的起點 Y 座標

  int endX2 = 133;     
  // 線的終點 X 座標

  int endY2 = 390;     
  // 線的終點 Y 座標

  int lineWidth2 = 25;  // 線的寬度

  // 繪製線段
  gdImageSetThickness(im, lineWidth +8);
  gdImageLine(im, startX2 -11, startY2, endX2 -11, endY2, white);

  gdImageSetThickness(im, lineWidth +10);
gdImageLine(im, startX2 -30, startY2 -9 , endX2 -30, endY2 -9 , white);

  gdImageSetThickness(im, lineWidth );
gdImageLine(im, startX2 +100, startY2 +150, endX2 +100, endY2 +150, white);

  gdImageSetThickness(im, lineWidth);
gdImageLine(im, startX2 +120, startY2 +155, endX2 +120, endY2 +155, white);

  gdImageSetThickness(im, lineWidth +14);
gdImageLine(im, startX2 +145, startY2 +157, endX2 +145, endY2 +157, white);

    gdImageSetThickness(im, lineWidth -10);
gdImageLine(im, 232, 426, 206, 448, white);

  }

  {
    // 起點和終點位置

  int startX = 564;    
  // 線的起點 X 座標

  int startY = 520;   
  // 線的起點 Y 座標

  int endX = 704;     
  // 線的終點 X 座標

  int endY = 350;     
  // 線的終點 Y 座標

  int lineWidth = 23;  // 線的寬度

  // 繪製線段
  gdImageSetThickness(im, lineWidth);
  gdImageLine(im, startX +70, startY +20, endX +70, endY +20, black);

    // 繪製線段
  gdImageSetThickness(im, lineWidth);
  gdImageLine(im, startX, startY, endX, endY, black);

    // 繪製線段
  gdImageSetThickness(im, lineWidth);
  gdImageLine(im, startX +35, startY +10, endX +35, endY +10, black);

gdImageSetThickness(im, lineWidth -10);
gdImageLine(im, 624, 400, 734, 490, white);

  int startX2 = 553;    
  // 線的起點 X 座標

  int startY2 = 330;   
  // 線的起點 Y 座標

  int endX2 = 633;     
  // 線的終點 X 座標

  int endY2 = 390;     
  // 線的終點 Y 座標

  int lineWidth2 = 25;  // 線的寬度

  // 繪製線段
  gdImageSetThickness(im, lineWidth +8);
  gdImageLine(im, startX2 +139, startY2, endX2 +139, endY2, white);

  gdImageSetThickness(im, lineWidth +10);
gdImageLine(im, startX2 +157, startY2 -9 , endX2 +157, endY2 -9 , white);

  gdImageSetThickness(im, lineWidth);
gdImageLine(im, startX2 +25, startY2 +155, endX2 +25, endY2 +155, white);

  gdImageSetThickness(im, lineWidth +30);
gdImageLine(im, startX2 -3, startY2 +170, endX2 , endY2 +170, white);
  }
  {
    // 起點和終點位置

  int startX = 330;    
  // 線的起點 X 座標

  int startY = 520;   
  // 線的起點 Y 座標

  int endX = 190;     
  // 線的終點 X 座標

  int endY = 350;     
  // 線的終點 Y 座標

  int lineWidth = 23;  // 線的寬度

  // 繪製線段
  gdImageSetThickness(im, lineWidth);
  gdImageLine(im, startX, startY, endX, endY, black);
  // 繪製線段
  gdImageSetThickness(im, lineWidth);
  gdImageLine(im, startX -35, startY +10, endX -35, endY +10, black);

  // 繪製線段
  gdImageSetThickness(im, lineWidth);
  gdImageLine(im, startX -70, startY +20, endX -70, endY +20, black);

  int startX2 = 213;    
  // 線的起點 X 座標

  int startY2 = 330;   
  // 線的起點 Y 座標

  int endX2 = 133;     
  // 線的終點 X 座標

  int endY2 = 390;     
  // 線的終點 Y 座標

  int lineWidth2 = 25;  // 線的寬度

  // 繪製線段
  gdImageSetThickness(im, lineWidth +8);
  gdImageLine(im, startX2 -11, startY2, endX2 -11, endY2, white);

  gdImageSetThickness(im, lineWidth +10);
gdImageLine(im, startX2 -30, startY2 -9 , endX2 -30, endY2 -9 , white);

  gdImageSetThickness(im, lineWidth );
gdImageLine(im, startX2 +100, startY2 +150, endX2 +100, endY2 +150, white);

  gdImageSetThickness(im, lineWidth);
gdImageLine(im, startX2 +120, startY2 +155, endX2 +120, endY2 +155, white);

  gdImageSetThickness(im, lineWidth +14);
gdImageLine(im, startX2 +145, startY2 +157, endX2 +145, endY2 +157, white);

    gdImageSetThickness(im, lineWidth -10);
gdImageLine(im, 232, 426, 206, 448, white);

  }
  {
    // 起點和終點位置

  int startX = 564;    
  // 線的起點 X 座標

  int startY = 97;   
  // 線的起點 Y 座標

  int endX = 704;     
  // 線的終點 X 座標

  int endY = 267;     
  // 線的終點 Y 座標

  int lineWidth = 23;  // 線的寬度

  // 繪製線段
  gdImageSetThickness(im, lineWidth);
  gdImageLine(im, startX +70, startY -20, endX +70, endY -20, black);

    // 繪製線段
  gdImageSetThickness(im, lineWidth);
  gdImageLine(im, startX, startY, endX, endY, black);

    gdImageSetThickness(im, lineWidth -10);
gdImageLine(im, 624, 212, 734, 118, white);

    // 繪製線段
  gdImageSetThickness(im, lineWidth);
  gdImageLine(im, startX +35, startY -10, endX +35, endY -10, black);

  int startX2 = 553;    
  // 線的起點 X 座標

  int startY2 = 277;   
  // 線的起點 Y 座標

  int endX2 = 633;     
  // 線的終點 X 座標

  int endY2 = 217;     
  // 線的終點 Y 座標

  int lineWidth2 = 25;  // 線的寬度

  // 繪製線段
  gdImageSetThickness(im, lineWidth +8);
  gdImageLine(im, startX2 +134, startY2, endX2 +134, endY2, white);

  gdImageSetThickness(im, lineWidth +10);
gdImageLine(im, startX2 +157, startY2 +9 , endX2 +157, endY2 +9 , white);

  gdImageSetThickness(im, lineWidth);
gdImageLine(im, startX2 +25, startY2 -155, endX2 +25, endY2 -155, white);

    gdImageSetThickness(im, lineWidth +30);
gdImageLine(im, startX2 -5, startY2 -155, endX2 -5, endY2 -155, white);

  }

    // Save image
FILE *outputFile = fopen("./../images/korea_flag.png", "wb");
if (outputFile == NULL) {
    fprintf(stderr, "Error opening the output file.\n");
    return 1;
}
  gdImagePngEx(im, outputFile, 9);
      fclose(outputFile);
      gdImageDestroy(im);
      return 0;
  }
