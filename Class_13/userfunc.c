#include<stdio.h>

 char dialogs(); // funkcijas deklarēšana
 char dialogs_i(int i); // funkcijas deklarēšana
 void test1(int a, int b, int c); // void nozīmē ka return nebūs
 void test2(int a, double b); // datu tips japiein katram argumentam


 int main(){

   char c;

 //  printf("Lietotāj, ievadi vienu naturālo skaitli: \n");
 //  scanf("%hhd", &c);
 //  printf("Ir ievadīts skaitlis : %d \n", c);

   c = dialogs();
   printf("Ir ievadīts skaitlis (Izdruka no main): %d \n", c);
   dialogs();

   int i_main = 1;
   dialogs_i(i_main);
   i_main++;
   dialogs_i(i_main);



 return 0;
 }

 char dialogs(){ // funkcijas definēšana var būt uzreiz bez deklarēšanas
                // definēšana var būt ievietota pēc main apraksta
                // deklarēšanai vai definēšanai ir jābūt pirms funkcijas izmantošanas
                // funkcijas datu tipam ir jasaskan ar atgriežamā lieluma datu tipa

  char c_func;
  printf("Lietotāj, ievadi vienu naturālo skaitli: \n");
  scanf("%hhd", &c_func);
  printf("Ir ievadīts skaitlis (Izdruka no funkcijas): %d \n", c_func);


  return c_func;
 }
x
 char dialogs_i(int i){

  char c_func;
  printf("\nFunkcija dialogs_i ir izpildīta %d Reizi: \n", i);
  printf("Lietotāj, ievadi vienu naturālo skaitli: \n");
  scanf("%hhd", &c_func);
  printf("Ir ievadīts skaitlis (Izdruka no funkcijas): %d \n", c_func);


  return c_func;
 }
