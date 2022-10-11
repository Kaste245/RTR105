#include<stdio.h>

 int main()
 {
  char a = 10; // divas darbības mainīgā deklarēšana - char a - vietas piešķiršana atmiņā
               // kur? (vietai ir adrese) un cik daudz? (atbilstoši datu tipam)
               // 1 byte: šī baita saturs nav zināms (0001 1110 vai 1100 1111 u.t.t.)
               // vērtības piešķiršana - a = 10; 10 - vesela tipa konstante
               //                                int - vesel tipa konstante
               //                                double - reālā tipa konstante
               // 1 byte: 0000 1010
               // char a = 10; -mainīgā definēšana
               // mainīgā nosaukums(vārds, identifikātors) nevar saturēt atstarpes un sākties ar skaitli
               // var būt ar mnemonisko nosaukumu (cilindra_tilpums)

  printf("a simobols: %c \n", a);
  printf("a decimals skaitlis: %d \n", a);
  printf("a helsidecimalais skaitlis: %#x \n", a);
  printf("a oktāls skaitlis: %#o \n", a);

  char b ;
  printf("\n b simobols: %c \n", b);
  printf("b decimals skaitlis: %d \n", b);
  printf("b helsidecimalais skaitlis: %#x \n", b);
  printf("b oktāls skaitlis: %#o \n", b);

  b = 250;
  // 250 vieta redzam -6
  // 250 (dec) -> 128 + 64 + 32 + 16 + 8 + 2 -> (1)111 1010 (bin)
  // char -> signed char => vecākais bits zīme
  //			          ^ invertēšana -> 000 0101
  //                                            +1 000 0001
  //                                            -----------
  //                                               000 0110
  //                    0000 0110(bin) -> 6(dec)
  //                    rezultātā ir -6

  printf("\n b simobols: %c \n", b);
  printf("b decimals skaitlis: %d \n", b);
  printf("b helsidecimalais skaitlis: %#x \n", b);
  printf("b oktāls skaitlis: %#o \n", b);


  return 0;
 }
