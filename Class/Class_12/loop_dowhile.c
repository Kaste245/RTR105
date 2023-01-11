#include<stdio.h>

// cikla operātori
// while- 'kamēr'
// for - 'līdz'
// do{} while(){} - 'darīt kamēr'
// while(izteiksme); vai while(){}
// pirms while () iekavām esošā darbība (vai darbības) tiks izpildītas tikmēr kamēŗ iekavas() izteiksmes rezultāts ir "true"- izteiksmes rezultāta bitu secība ir vismaz viens 1
// "false" vai absaluta nulle visi biti ar 0 stāvokli
// bet šis darbības obligāti tiks izpildītas vismaz 1 reizi


 int main(){

  int a = 10;
  do{
   printf("a %d \n", a);
   a--;
   }
 while(a >= 0);


   printf("a (pēc cikla): %d \n", a);





 return 0;
}
