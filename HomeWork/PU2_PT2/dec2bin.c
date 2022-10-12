#include <stdio.h>

 int  main()
  {
     unsigned char a;
     char b, c;
       printf("Ievadi naturālu decimālo skaitli:\n");
       scanf("%hhu",  &a);

       printf("(DEC)%hhu --> (BIN)", a);

      for(b = 7; b >= 0; b--)
    {

     c = a >> b;

     if(c & 1)
      printf("1");
     else
      printf("0");
    }


   printf("\n");

  return 0;
  }
