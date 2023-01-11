#include<stdio.h>

// Masīvi - secīgi novietotas vērtības atmiņā izg;ustamas ar vienu identifikātoru
// palīdzību: a[0], b[1]....
// alternatīva - a0, a1, a2 -kas nav ērti? - nav iespējama algoritmizācīja, jo
// tikšanai pie vērtībām ir manuāli jamaina mainīga vārds, bet masīva gadījumā
// jāmaina indekss, tātad, i=0; a[i]; i=1; a[i]; ....

// NB! masīva pirmā elementa indekss ir - 0
// NB! masīvam arī ir adrese (masīva vārds ir norāde) - tā ir nultā elementa adrese



 int main(){

   int i_array1[10]; //masīva deklarēsana (piesaukt drīkst , bet vērtības nav zināmas)
   int i_array2[3] = {1, 2, 3}; //masīva definēšana
   int i_array3[5] = {4, 5, 6}; //masīva pēdējie divi elementi būs ar 0 vērtībām
   int i_array4[5] = {0}; //masīva visas vērtības ir 0
   int i_array2D[2][3] = {{7, 8, 9},{10, 11, 12}}; //[2 - rindu skaits ][3 ir kolonu skaits]
                             //dimensijas var būt vairākas
   printf("masīva i_array2 adrese: %p\n", i_array2);

   printf("masīva i_array2, 0. elemneta  adrese: %p\n", &i_array2[0]);
   printf("masīva i_array2, 0. elemneta  vērtībām: %d\n", i_array2[0]);
   printf("masīva i_array2, 0. elemneta  vērtībām(izmantojot): %d\n", *i_array2);

   printf("masīva i_array2, 1. elemneta  adrese: %p\n", &i_array2[1]);
   printf("masīva i_array2, 1. elemneta  vērtībām: %d\n", i_array2[1]);
   printf("masīva i_array2, 1. elemneta  vērtībām: %d\n", *(i_array2+1));

   printf("masīva i_array2, 2. elemneta  adrese: %p\n", &i_array2[2]);
   printf("masīva i_array2, 2. elemneta  vērtībām: %d\n", i_array2[2]);
   printf("masīva i_array2, 2. elemneta  vērtībām: %d\n", *(i_array2+2));

   printf("\nmasīva i_array2D, 0.2. elemneta  adrese: %p\n", &i_array2D[0][2]);
   printf("masīva i_array2D, 0.2. elemneta  vērtībām: %d\n", i_array2D[0][2]);
   printf("masīva i_array2D, 0.2. elemneta  vērtībām: %d\n", *(*(i_array2D+0)+2));

   printf("masīva i_array2D, 1.0. elemneta  adrese: %p\n", &i_array2D[1][0]);
   printf("masīva i_array2D, 1.0. elemneta  vērtībām: %d\n", i_array2D[1][0]);
   printf("masīva i_array2D, 1.0. elemneta  vērtībām: %d\n", *(*(i_array2D+1)+0));





  return 0;
 }
