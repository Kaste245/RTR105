#include<stdio.h>

 int main(){

 int i, c, n, e, fac, fac2;

  printf("Ievadīt vienu veselu decimālo skaitli: \n");
  scanf("%d", &n);


  if(n == 0)
    printf("Factoriāļa iznākums ir: 1 \n");

  else{
    e = n-1;
    i = 1;
    c = 1;
    fac = 1;
    fac2 = 1;

    while(i <= n){

      fac = fac * i;
      i++;
     }

    while(c <= e){

      fac2 = fac2 * c;
      c++;
     }

       if(fac2 == fac / n)
          printf("Factoriāļa iznākums ir: %d \n", fac);
       else
          printf("Skaitlim !%d ar izvēlētu datu tipu pareizi aprēķināt faktoriālu nav iespējams \n", n);
   }

 return 0;
  }
