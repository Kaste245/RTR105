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
   float c = 2.3;
   double d = -5.6e4;

   printf("%d (%ld byte) * %d (%ld byte)", a, sizeof(a), b, sizeof(b));
   printf("= %d (%ld bytes) \n", a*b, sizeof(a*b));

   return 0;
  }
