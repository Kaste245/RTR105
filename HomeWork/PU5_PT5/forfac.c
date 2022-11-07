#include<stdio.h>

 int main(){

 char i, c, n, e, fac, fac2;

  printf("Ievadīt vienu veselu decimālo skaitli: \n");
  scanf("%hhd", &n);


  if(n == 0)
    printf("Factoriāļa iznākums ir: 1 \n");

  else{
    e = n - 1;
    fac = 1;
    fac2 = 1;

    for(i = 1; i <= n; i++){

      fac = fac * i;
     }

    for(c = 1; c <= e; c++){

      fac2 = fac2 * c;
     }

       if(fac2 == fac / n)
          printf("Factoriāļa iznākums ir: %d \n", fac);
       else
          printf("Skaitlim !%d ar izvēlētu datu tipu pareizi aprēķināt faktoriālu nav iespējams! \n", n);
   }

 return 0;
  }


