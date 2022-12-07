#include<stdio.h>
#include<math.h>

 int main(){

 float a=0., b =2*M_PI, x, delta_x=1.e-2, c = 0, d = 0;

 printf("\tx\texp(x)\t\texp\'(x)\t\texp\'(x)\t\texp''(x)\texp''(x)\n\n");
 printf("\t\t\t\tanal. forma\tdife. forma\tanal. forma\tdife. forma\n\n");

 x = a;

   while(x < b){

    c = (exp(x + delta_x) - exp(x)) / delta_x;

    d = ((exp(x + delta_x)) - (2*exp(x)) + (exp(x - delta_x))) / (delta_x*delta_x);

    x += delta_x;


    }
  printf(" %10.2f", x);
  printf(" %10.2f", exp(x));
  printf("\t   %10.2f", x);
  printf("\t     %10.2f", c);
  printf("\t    %10.2f", x);
  printf("\t     %10.2f\n", d);



 return 0;
 }
