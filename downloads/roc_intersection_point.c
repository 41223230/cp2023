// https://en.wikipedia.org/wiki/Flag_of_the_Republic_of_China 
// 內政部國旗參考資料: https://www.moi.gov.tw/cp.aspx?n=10621 
// cc roc_flag_in_gd.c -lgd -lm to link with gd and math library 
// https://www.rapidtables.com/web/color/RGB_Color.html 
// 幾何形狀著色與繪圖練習 
// 以下 gd 繪圖程式嘗試畫出 ROC 國旗, 請根據下列程式內容完成後續的國旗繪圖 
#include <stdio.h> 
#include <gd.h> 
#include <math.h> 

void draw_roc_flag(gdImagePtr img); 
void draw_white_sun(gdImagePtr img, int x, int y, int size, int color); 

int main() { 
    // width 3: height 2 
    int width = 1200; 
    // 國旗長寬比為 3:2 
    int height = (int)(width*2.0 / 3.0); 

    gdImagePtr img = gdImageCreateTrueColor(width, height); 
    gdImageAlphaBlending(img, 0); 

    draw_roc_flag(img); 

    FILE *outputFile = fopen("roc_flag_in_gd.png", "wb"); 
    if (outputFile == NULL) { 
        fprintf(stderr, "Error opening the output file.\n"); 
        return 1; 
    } 
    gdImagePngEx(img, outputFile, 9); 
    fclose(outputFile); 
    gdImageDestroy(img); 
    return 0; 
} 

void draw_roc_flag(gdImagePtr img) { 
    int width = gdImageSX(img); 
    int height = gdImageSY(img); 
    int red, white, blue; 
    // 白日位於青天面積正中央, 因此中心點座標為長寬各 1/4 處 
    int center_x = (int)(width/4); 
    int center_y = (int)(height/4); 
    // gdImageFilledEllipse 需以長寬方向的 diameter 作圖 
    // 由於中央白日圓形的半徑為青天寬度的 1/8 
    // 因此中央白日圓形的直徑為青天寬度的 1/4, 也就是國旗寬度的 1/8 
    // 而且白日十二道光芒的外圍圓形其半徑也是國旗寬度的1/8 
    int sun_radius = (int)(width/8); 
    // 中央白日圓形的直徑等於十二道光芒外圍圓形的半徑 
    int white_circle_dia = sun_radius; 
    // 中央藍色圓形半徑為中央白日的 1又 2/15 
    int blue_circle_dia = white_circle_dia +  white_circle_dia*2/15; 
    // 根據 https://www.moi.gov.tw/cp.aspx?n=10621 訂定國旗三種顏色值 
    red = gdImageColorAllocate(img, 255, 0, 0); // 紅色 
    white = gdImageColorAllocate(img, 255, 255, 255); // 白色 
    blue = gdImageColorAllocate(img, 0, 0, 149); // 藍色 
    // 根據畫布大小塗上紅色長方形區域 
    gdImageFilledRectangle(img, 0, 0, width, height, red); 
    // 青天面積為整面國旗的 1/4, 也是採用長方形塗色 
    gdImageFilledRectangle(img, 0, 0, (int)(width/2.0), (int)(height/2.0), blue); 
  {int x1 = 429; 
   int y1 = 125; 
   int x2 = 279; 
   int y2 = 165; 

   // 畫一條線連接兩個點 
   gdImageLine(img, x1, y1, x2, y2, white); 
  } 
  {int x1 = 170; 
     int y1 = 274; 
     int x2 = 279; 
     int y2 = 165; 

     // 畫一條線連接兩個點 
     gdImageLine(img, x1, y1, x2, y2, white); 
  } 
  { 
    int x1 = 170; 
     int y1 = 274; 
     int x2 = 429; 
     int y2 = 125; 

     // 畫一條線連接兩個點 
     gdImageLine(img, x1, y1, x2, y2, white); 
  } 
  // 利用一個藍色大圓與白色小圓畫出藍色環狀 
  gdImageFilledEllipse(img, center_x, center_y, blue_circle_dia, blue_circle_dia, blue); 
  gdImageFilledEllipse(img, center_x, center_y, white_circle_dia, white_circle_dia, white); 


  // 定義座標結構 
  typedef struct { 
      double x; 
      double y; 
  } Point; 

  // 計算圓與線的交點 
  void circleLineIntersection(double h, double k, double r, double x1, double y1, double x2, double y2) { 
      // 直線斜率 
      double m = (y2 - y1) / (x2 - x1); 

      // 直線方程式中的常數項 
      double b = y1 - m * x1; 

      // 圓與直線交點的計算 
      double A = 1 + pow(m, 2); 
      double B = 2 * (m * b - m * k - h); 
      double C = pow(k, 2) - pow(r, 2) + pow(h, 2) - 2 * b * k + pow(b, 2); 

      // 判斷交點個數 
    double discriminant = pow(B, 2) - 4 * A * C; 
    if (discriminant > 0) { 
        double x_intersect1 = (-B + sqrt(discriminant)) / (2 * A); 
        double y_intersect1 = m * x_intersect1 + b; 
        printf("交點: (%.2f, %.2f)\n", x_intersect1, y_intersect1); 

        double x_intersect2 = (-B - sqrt(discriminant)) / (2 * A); 
        double y_intersect2 = m * x_intersect2 + b; 
        printf("交點: (%.2f, %.2f)\n", x_intersect2, y_intersect2); 
    } else if (discriminant == 0) { 
        double x_intersect = -B / (2 * A); 
        double y_intersect = m * x_intersect + b; 
        printf("交點: (%.2f, %.2f)\n", x_intersect, y_intersect); 
    } else { 
        printf("No points.\n"); 
    } 

  } 


      // 圓的參數 
      double circle_x = (int)(width/4); // 圓心 x 座標 
      double circle_y = (int)(height/4); // 圓心 y 座標 
      double radius = white_circle_dia +  white_circle_dia*2/15;   // 圓半徑 

      // 兩點座標 



  double x3 = 170; 
  double y3 = 274; 
  double x4 = 279; 
  double y4 = 165; 

  circleLineIntersection(circle_x, circle_y, radius, x4, y4, x3, y3); 


  double x5 = 279; 
  double y5 = 165; 
  double x6 = 429; 
  double y6 = 125; 

  circleLineIntersection(circle_x, circle_y, radius, x6, y6, x5, y5); 

  }