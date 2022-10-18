#include<stdio.h>




 int main()
  {
   char a = 'a';
   int b = 2000;
   float c = 2.3;
   double d = -5.6e4;

   printf("%d (%ld byte) | %d (%ld byte)", a, sizeof(a), b, sizeof(b));
   printf("= %d (%ld bytes) \n", a|b, sizeof(a|b));

   return 0;
  }
