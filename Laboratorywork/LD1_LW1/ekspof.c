#include<stdio.h>
#include<math.h>

 int main(){

 double x, y, a, S;
 int k = 0;

 printf("Eksponentfunkcijas aprēķināšana!\n");
 scanf("%lf", &x);
 printf("\nTavs ievadītais argumens x -> %f\n", x);

 y = exp(x);
 printf("exp(%f) = %f \n\n", x, y);

 a = pow(x, k)/(1.);
 S = a;

   while(k<500){
    k++;
    a = a * x / k;
    S = S + a;
   }

 printf("a0 = %f  S0 = %f\n", a, S);



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

