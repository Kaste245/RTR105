#include<stdio.h>

 int main ()
  {

   if(1); /*iekš () var būt "apaļā" nulle vai bitu secības kas satur vismaz bitu ar 1*/

   int a =10;
   if(a > 7)
    printf("viena darbība, kas tik sizpildīta, ja nosacījums ir spēkā \n");
    // nosacījums ir spēkā - rezultātā ir vismaz viens bits ar 1

   if(a >7)
    {
    printf("Darbību bloks, kas tiks izpildīts, ja nosacījums ir spēka \n");
    printf("Pirmais\n");
    printf("Otrais\n");
    }


   if(a >7)
    {
    printf("Darbību bloks, kas tiks izpildīts, ja nosacījums ir spēka \n");
    printf("Pirmais\n");
    printf("Otrais\n");
    }
  else /* else nesatur nosacījumu
          else vienmēr piedr kādam if
          ka atrodas vienas darbības ; vai darbību bloka {;;;} attālumā no tā
      */

    {
    printf("Darbību bloks, kas tiks izpildīts, ja nosacījums ir spēka \n");
    printf("Pirmais else\n");
    printf("Otrais else\n");
    }
    //nosacījums nas spēkā - rezultāta visi biti ir ar 0

   //if(nosacījums);
   //if(nosacījums) ; else ;
   //if(nosacījums){} else{}


   //elif ->
   /*
   if(nosacījums_a)
   {
   }
  else
   {
   if(nosacījums_b)
   { ; }
   }
  */



  return 0;
  }
