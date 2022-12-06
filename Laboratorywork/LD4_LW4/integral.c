#include<stdio.h>
#include<math.h>

 int main(){

  float a, b, eps = 1.e-3, h, integr1 = 0., integr2;
  int k, n = 2;

  printf("Ievadi vērtibu a \n");
  scanf("%f", &a);

  printf("Ievadi vērtibu b \n");
  scanf("%f", &b);

  b = b*M_PI/2;

  integr2 = (b - a) * (exp(a) + exp(b)) / n;

  while(fabs(integr2 - integr1) > eps){

   n *= 2;
   h = (b - a) / n;
   integr1 = integr2;
   integr2 = 0.;

   for(k = 0;k < n;k++)
   integr2 += h * exp(a + (k + 0.5) * h);
  }

  printf("Integrālja vērtība: %.2f \n", integr2);

 return 0;
 }
