// Divu ciparu reizinājums

#include<stdio.h>

int main() {

  unsigned long n1,n2,rez;
  printf("Pirmais cipars:");
  scanf("%lu", &n1);
  printf("Otrais cipars:");
  scanf("%lu", &n2);
  rez=n1*n2;
  printf("Gala rezultats: %lu \n", rez);
  return 0;
}
