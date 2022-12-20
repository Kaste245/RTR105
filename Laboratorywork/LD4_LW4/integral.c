#include<stdio.h>
#include<math.h>

 int main(){

  float a, b, eps, h, integr1 = 0., integr2;
  int k, n = 2;

  printf("Ievadi vērtibu a \n");
  scanf("%f", &a);

  printf("Ievadi vērtibu b \n");
  scanf("%f", &b);

  printf("Ievadi precizitāti \n");
  scanf("%f", &eps);


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
