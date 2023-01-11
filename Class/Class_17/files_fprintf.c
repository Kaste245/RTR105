#include<stdio.h>

 int main(void){

   FILE *fp;
   fp = fopen("./teksts.dat","wt");
              // Kur (var norādīt ceļu) un ko (faila nosaukums)
              // Kādam nolūkam

   if(fp == NULL){

   printf("Failu nav izdevies atvērt. \n");
   return 100;
   }

   fprintf(fp, "Izvads failā \n");
   fprintf(fp, "Fails ir atvērts. 2. ieraksts \n");
   double d = 1.8963644;
   fprintf(fp, "d mainīgā vērtība : %.3f \n", d);

   fclose(fp);


  return 0;
 }
