#include<stdio.h>

 int main(){

 char i, c, n, e, fac, fac2;

  printf("Ievadīt vienu veselu decimālo skaitli: \n");
  scanf("%hhd", &n);


  if(n == 0)
    printf("Factoriāļa iznākums ir: 1 \n");

  else{

    e = n - 1;
    i = n;
    c = 1;
    fac = 1;
    fac2 = 1;

    while(n / i !=n){

      fac = fac * i;
      i--;
     }

    while(c <= e){

      fac2 = fac2 * c;
      c++;
     }

         if(fac / n == fac2)
          printf("Factoriāļa iznākums ir: %d %d i%d n%d c%d e%d \n", fac, fac2 , i, n, c, e);
         else
          printf("Skaitlim !%d ar izvēlētu datu tipu pareizi aprēķināt faktoriālu nav iespējams! \n", n);

   }

 return 0;
  }
