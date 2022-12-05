#include<stdio.h>
#include<math.h>

 int main(){

 double x, y, a, S;
 int k = 0;

 printf("Eksponentfunkcijas aprēķināšana!\n");
 scanf("%lf", &x);
 printf("\nTavs ievadītais argumens x -> %f\n", x);

 y = exp(x);
 printf("exp(%lf) = %lf \n\n", x, y);

 a = pow(x, k)/(1.);
 S = a;
 printf("a0 = %lf  S0 = %lf\n", a, S);


   while(k<501){
    k++;
    a = a * x / k;
    S = S + a;
   }

 printf("a499 = %lf  S499 = %lf\n", a-a, S-a);
 printf("a500 = %lf  S500 = %lf\n", a, S);
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

