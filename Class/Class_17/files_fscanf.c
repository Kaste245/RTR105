#include<stdio.h>

 int main(void){

   FILE * fp;
   fp = fopen("./teksts.dat","rt");
              // Kur (var norādīt ceļu) un ko (faila nosaukums)
              // Kādam nolūkam
   char ch;
   if(fp == NULL){

   printf("Failu nav izdevies atvērt. \n");
   return 100;
   }

   while((ch = fgetc(fp)) != EOF)
   putc(ch, stdout);

   fclose(fp);


  return 0;
 }
