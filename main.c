#include <stdio.h>

int main(void){
  float a, b;
  
  printf("Podaj bok a: ");
  scanf("%f", &a);

  printf("Podaj bok b: ");
  scanf("%f" , &b);

  float pole = a*b;
  printf("Pole jest równe: %f" , pole);
  printf("\n");

  if(a==b) {
    printf("Prostokąt jest kwadratem");
    } else {
    printf("Prostokąt nie jest kwadratem");
  }

  return 0;
  
}