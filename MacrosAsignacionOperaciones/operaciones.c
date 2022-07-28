#include <stdio.h>

#define PI 3.1416

int main(){
  float x;
  x = PI;

  printf("El valor de x = %f\n", x);
  
  int y;
  printf("Introduce un valor para y: ");
  scanf("%i", &y);

  printf("El valor de y = %i\n", y);

  x = x * y;
  printf("El nuevo valor de x = %f\n", x);


  return 0;
}