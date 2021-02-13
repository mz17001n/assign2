#include <stdio.h>
#define PI 3.14159

int main()
{
  float r, a, i;

  
  printf("Enter radius (in millimeters):\n");
  scanf("%f", &r);
  i = r *2.54;
  
  a = PI * i * i;

  printf("Circle's area is %3.2f (sq in).\n", a);
}