#include<stdio.h>




 int main()
  {
   char a = 1;
   a = 7;

   printf("%d (%ld byte) << %d (%ld byte)", a, sizeof(a), a, sizeof(a));
   printf("= %d (%ld bytes) \n", (char)(a<<a), sizeof((char)(a<<a)));

   return 0;
  }
