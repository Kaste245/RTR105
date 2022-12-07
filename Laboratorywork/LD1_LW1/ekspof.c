#include<stdio.h>
#include<math.h>

 int main(){

 long double a = 1.L, b = 1.L;
 double x, y, S, S2;
 int k = 0;

 printf("Eksponentfunkcijas aprēķināšana!\n");
 scanf("%lf", &x);
 printf("\nTavs ievadītais argumens x -> %f\n", x);

 y = exp(x);
 printf("exp(%lf) = %lf \n\n", x, y);

 a = pow(x, k)/(1.);
 S = a;
 b = pow(x, k)/(1.);
 S2 = b;
 printf("a0 = %Le  S0 = %lf\n", a, S);


   while(k<501){
    k++;
    a = a * x / k;
    S = S + a;
   }

 k = 0;
 while(k<500){
    k++;
    b = b * x / k;
    S2 = S2 + b;
   }


 printf("a499 = %Le  S499 = %lf\n", b, S2);
 printf("a500 = %Le  S500 = %lf\n", a, S);
 printf("exp(%lf) caur summu = %lf \n\n", x, S);


 printf("       500                              \n");
 printf("     -------                            \n");
 printf("     \\        k                        \n");
 printf(" %.2f \\      x                         \n",x);
 printf("e    =>    -----                        \n");
 printf("      /      k!                         \n");
 printf("     /                                  \n");
 printf("     -------                            \n");
 printf("      k=0                               \n");
 printf("                                        \n");
 printf("                           x            \n");
 printf(" Rekurences reizinājums: -----          \n");
 printf("                           k            \n");

 return 0;
 }

