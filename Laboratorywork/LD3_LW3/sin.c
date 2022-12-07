#include<stdio.h>
#include<math.h>
#include<stdlib.h>

 int main(){

 FILE *fptr = fopen("derivative.dat", "w");

   if(fptr == NULL)
    {
      printf("Error!");
      exit(1);
    }

 float a=0., b =2*M_PI, x, delta_x=1.e-2, c = 0, d = 0;

 fprintf(fptr, "\tx\texp(x)\t\texp\'(x)\t\texp\'(x)\t\texp''(x)\texp''(x)\n\n");
 fprintf(fptr, "\t\t\t\tanal. forma\tdife. forma\tanal. forma\tdife. forma\n\n");

 x = a;

   while(x < b){

    c = (exp(x + delta_x) - exp(x)) / delta_x;

    d = ((exp(x + delta_x)) - (2 * exp(x)) + (exp(x - delta_x))) / (delta_x * delta_x);

    x += delta_x;

    }

  fprintf(fptr, " %10.2f", x);
  fprintf(fptr, " %10.2f", exp(x));
  fprintf(fptr, "\t   %10.2f", x);
  fprintf(fptr, "\t     %10.2f", c);
  fprintf(fptr, "\t    %10.2f", x);
  fprintf(fptr, "\t     %10.2f\n", d);

  fclose(fptr);

 return 0;
 }
