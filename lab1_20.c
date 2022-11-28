#include <stdio.h>
#include <math.h>

void main() {
  float x, y;
  x = 0.712;
  y = 3.161;

  double sqroot, result;
  sqroot = sqrt(x * pow(y, 2) + y * sin(x) + 142 * pow(x, 2) * y);

  result = sqroot + tan(x * y) - (142 * (y - x)) / 16.32;
  
  printf("Result: %lf\n", result);
}