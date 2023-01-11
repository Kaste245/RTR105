#include<stdio.h>

// cikla operātori
// while- 'kamēr'
// for - 'līdz'
// do while - 'darīt kamēr'
// NB! for(;;) - for cikla iekavas vienmēr satur 2 semikolus(;;)
// for(; izteiksme ;); vai for(; izteiksme ;){}
// aiz for () iekavām esošā darbība (vai darbības) tiks izpildītas tikmēr kamēŗ iekavas(;;) izteiksmes rezultāts ir "true"- izteiksmes rezultāta bitu secība ir vismaz viens 1
// "false" vai absaluta nulle visi biti ar 0 stāvokli


 int main(){

  int a = 10;
  for(a = 10; a >= 0; a--){

// darbības pirms pirmā semikola tiek izpildītas tikai 1 reizi cikla sākumā
// tālāk izteiksmes rezultāta aprēķins (jeb nosacījumu pārbaude)
// cikla ķermeņa (iekš{}) darbību pildīšana
// cikla mainīgo izmaiņa - aprakstīta aiz otrā semikola;
// turpinājumā atkal cikla izteiksmes (nosacijuma) rezultāta aprēķins
  printf("a: %d \n", a);
  }


   printf("a (pēc cikla): %d \n", a);





 return 0;
}
