#include<stdio.h>
#include<math.h>

 int main(){

 float a=0., b =2*M_PI, x, delta_x=1.e-2;

 printf("\tx\t\texp(x)\t\texp\'(x)\n");

 x = a;

   while(x < b){

    printf("%10.2f\t%10.2f\t%10.2f\n", x, exp(x), (exp(x + delta_x) - exp(x)) / delta_x);
    x += delta_x;

    }
 return 0;
 }
