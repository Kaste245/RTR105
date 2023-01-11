//!5 = 1*2*3*4*5 = !4*5 = 5!/5 = !4
//!0 = 1 (!0 - cik sakitļu kopas var izveidot no tukšas kopas)
#include<stdio.h>

 int main(){

 int i, n, fac;

  printf("Ievadīt vienu veselu skaitli : \n");
  scanf("%d", &n);

  i = 1;
  fac = 1;
  while(i<=n){

  fac = fac * i;
  printf("%3d! = %10d \n", i, fac);
  i++;
}


// while(i<=n){

// fac = fac/n;
// printf("kautk ko");
//}





  return 0;
}
