#include <stdio.h>


inline float celsius_To_Fahrenheit(float celsius) {
  return (celsius * 9 / 5) + 32;
}
inline float fahrenheit_To_Celsius(float fahrenheit) {
  return (fahrenheit - 32) * 5 / 9;
}

int main() {
  float celsius = 40;
  float fahrenheit = 89.60;
  printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, celsius_To_Fahrenheit(celsius));
  printf("\n%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit,
    fahrenheit_To_Celsius(fahrenheit));
  return 0;
}