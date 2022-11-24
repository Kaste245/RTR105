#include "userdefined.h"
#include<stdio.h>

 int main(void){

  sum(); // no arguments no return (nargnret.c)

  int x = 5, y = 4, f = 0;
  multiplie(x, y, f); // with arguments no return (wargnret.c)

  int summ;
  summ = sum2();
  printf("sum2 Vērtība %d \n", summ); // no arguments with return (nargwret.c)

  int k, o = 7, p = 3;
  k = multiplie2(o, p);
  printf("multiplie2 Vērtība %d \n", k); // with arguments with return (wargwret.c)

  return 0;

 }
