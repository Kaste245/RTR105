#include<stdio.h>

// Operācījas : opernats_1 operācija operants_2
//                   operācijas_rezultāts
//                   Parasti lielākais datu tips - rezultāts
// Matemātiskas: +, -, *, /, %, ++, --
// Attieciību: <, <=, >=, >, ==, !=
// Loģiskas operācijas: &&, ||
// Loģiskās pa bitiem: &, |, ^, ~
// Bitu operācijas: >>, <<
// ko pētīt šodien : kā strādā operācija?
//                   Vai drīkst izmanto jebkuru datu tipu?
//                   Operāciju izpildīšanu secību (to nosaka prioritāte; secības kontrolei var izmantot ())
// (int/int vai char/char), %, &, |, ^, !, &&, ||, <<, >>


 int main()
  {
   char a = 'a';
   int b = 2000;

   printf("%d (%ld byte) * %d (%ld byte)", a, sizeof(a), b, sizeof(b));
   printf("= %d (%ld bytes) \n", a*b, sizeof(a*b));


  //&&

  c1 = 1;
  c2 = 2;
  printf("%d (%ld byte) && %d (%ld byte)", c2, sizeof(c2), c1, sizeof(c1));
  printf("= %d (%ld bytes) \n", c2&&c1, sizeof(c2&&c1));


   return 0;
  }
