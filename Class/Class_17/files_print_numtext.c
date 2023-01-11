#include<stdio.h>

 int main(void){

   FILE *fp;
   fp = fopen("./numbers.dat","w+");
              // Kur (var norādīt ceļu) un ko (faila nosaukums)
              // Kādam nolūkam

   if(fp == NULL){

   printf("Failu nav izdevies atvērt. \n");
   return 100;
   }

   double d[] = {1.896364, 8.234323, 7.324323};
   printf("d[0] = %f, d[1] = %f, d[2] = %f (before fscanf) \n", d[0], d[1], d[2]);

   fprintf(fp, " %f\n %f\n %f \n", d[0], d[1], d[2]);
   rewind(fp);
   fscanf(fp, "%lf%lf%lf", &d[0], &d[1], &d[2]);

   fclose(fp);

   printf("d[0] = %f, d[1] = %f, d[2] = %f (after fscanf) \n", d[0], d[1], d[2]);

  return 0;
 }
