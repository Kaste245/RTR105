#include<stdio.h>
#include<math.h>

 float modified_exp(float x, float A){
 return exp(x)-A;
 }

 int main(){

  float a, x, delta_x, b, y, A;
  a = 0;
  b = 2*M_PI;

  printf("Ievadi A vertību vienādojumam exp(x)=A \n");
  scanf("%f", &A);

  x = a;
  delta_x = 0.1;
  printf("\t x \t y \n");

  while(x<b){

    printf("%10.1f %10.1f \n", x, modified_exp(x, A));
    x += delta_x;

  }
 }
