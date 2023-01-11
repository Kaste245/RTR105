#include<stdio.h>




 int main()
  {
   char a = 50;
   a = 2;

   printf("%d (%ld byte) >> %d (%ld byte)", a, sizeof(a), a, sizeof(a));
   printf("= %d (%ld bytes) \n", a>>a, sizeof(a>>a));

   return 0;
  }
