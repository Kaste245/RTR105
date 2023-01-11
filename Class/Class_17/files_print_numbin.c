#include<stdio.h>

 int main(void){

   FILE *fp;
   fp = fopen("./numbers.bin","w+");
              // Kur (var norādīt ceļu) un ko (faila nosaukums)
              // Kādam nolūkam

   if(fp == NULL){

   printf("Failu nav izdevies atvērt. \n");
   return 100;
   }

   double d[] = {1.896364, 8.234323, 7.324323};
   printf("d[0] = %f, d[1] = %f, d[2] = %f (before fscanf) \n", d[0], d[1], d[2]);

   fwrite(d, sizeof(double), sizeof(d)/sizeof(double), fp);
   rewind(fp);
   fread(d, sizeof(double), sizeof(d)/sizeof(double), fp);

   fclose(fp);

   printf("d[0] = %f, d[1] = %f, d[2] = %f (after fscanf) \n", d[0], d[1], d[2]);

  return 0;
 }
