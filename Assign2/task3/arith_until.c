#include <stdio.h>
#include <stdbool.h>
#define PI 3.14159

int main()
{
  float r, a, c;
  bool repeat = true;

  while(repeat) {
  printf("Enter radius (in millimeters):\n");
  scanf("%f", &r);
  if(r == 0) {
    printf("Exit \n");
    repeat = false;
  }
  else {
    r = r / 25.4;

    a = PI * r * r;
    c = PI * 2 * r;

    printf("Circle's area is %3.2f (sq.in). \n", a);
    printf("Its circumference is %3.2f (in). \n", c);
  }

}
}