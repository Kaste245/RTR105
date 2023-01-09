#include<stdio.h>
#include<math.h>

 int main(){

  float a, b, eps, h, integr1 = 0., integr2, stepsize, integr3, integr4, x, sum;
  int k, n = 2, i, l, j, o;

  printf("Ievadi vērtibu a \n");
  scanf("%f", &a);

  printf("Ievadi vērtibu b \n");
  scanf("%f", &b);

  printf("Ievadi precizitāti \n");
  scanf("%f", &eps);

  //Taisnastūra metode

  integr2 = (b - a) * (exp(a) + exp(b)) / n;

  while(fabs(integr2 - integr1) > eps){

   n *= 2;
   h = (b - a) / n;
   integr1 = integr2;
   integr2 = 0.;

   for(k = 0; k < n; k++)
   integr2 += h * exp(a + (k + 0.5) * h);
  }

  printf("Integrālja vērtība(taisnastūra metodes): %.2f \n", integr2);

  //Trapeču metode

  stepsize = (a - b)/eps;

  integr3 = exp(a) + exp(b);

  for(i=1; i <= eps - 1; i++)
  {
   l = a + i * stepsize;
   integr3 = integr3 + 2 * exp(l);
  }

  integr3 = integr3 * stepsize / 2;

  printf("Integrāļa vērtība(trapeču metodes): %.2f \n", integr3);

  //Simpsona metode

  o = fabs(b-a) / eps;

  for(j = 1; j < eps; j++){

    x = a + i * h;

    if(j%2 == 0)
      sum = sum + 2 * exp(x);
    else
      sum = sum + 4 * exp(x);
  }

  integr4 =(o/3) * (exp(a) + exp(b) + sum);

  printf("Integrāļa vērtība(simpsona metode): %.2f\n", integr4);

 return 0;
 }
