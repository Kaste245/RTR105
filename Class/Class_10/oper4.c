#include<stdio.h>




 int main()
  {
   char a = 'a';
   int b = 2000;
   float c = 2.3;
   double d = -5.6e4;

   printf("%d (%ld byte) %c %d (%ld byte)", a, sizeof(a),'%', a, sizeof(a));
   printf("= %d (%ld bytes) \n", a%a, sizeof(a%a));

   return 0;
  }
