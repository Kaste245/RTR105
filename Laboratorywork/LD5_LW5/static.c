#include <stdio.h>
#include<stdlib.h>
 int main(){

  unsigned  char array[127], swap, d, n, c, i, min, max;
  int total, l, maxvalue = 0, maxcount = 0, j, count = 0, m, len = 0;

  float median;

 FILE *fptr = fopen("statistic.dat", "w");

  if(fptr = NULL){

  printf("ERROR!");
  exit(1);
  }

  printf("Ievadi kādu daudzumu vēlies sakārtot\n");
  scanf("%hhd", &n);

  printf("Ievadi %hhd simbolus \n", n);

  for (c = 0; c < n; c++)
    scanf("%c", &array[c]);

/*   len = sizeof(array)/sizeof(array[0]);

   for(i = 0; i < len; i++){
        if(array[i] == 0x0a){
          for(j = i;j < len; j++){
            array[j] = array[j+1];
              }
            len--;
          }
      } */

   //Augoša secība

  for (c = 0 ; c < n - 1; c++){

    for (d = 0 ; d < n - c - 1; d++){

      if (array[d] > array[d+1]){

        swap = array[d];
        array[d] = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  printf("Sakārtot augošā secībā:\n");

  for (c = 0; c < n; c++)
    printf("%d \t", array[c]);
    // fprintf(stdout, "%d \t", array[c]);

   //Min, Max

    min = max = array[0];
    for(i = 1; i < n; i++)
    {
         if(min > array[i])
	  min = array[i];
         if(max < array[i])
          max = array[i];
    }
     printf("\nMinimālā vērtība = %d\n", min);
     printf("Maksimālā vērtība = %d\n", max);

   //Vidēja vērtība

   total = 0;

   for(l = 0; l < n; l++) {
      total += array[l];
   }

  printf("Videjā vērtība = %d \n", total/n);

   //Mediana

 if(n%2 == 0)
  median = (array[(n/2)-1] + array[(n/2)]) / 2.0;
 else
  median = array[(n/2)];

 printf("Mediānas vērtība = %.2f\n", median);


  //Moda

   for (m = 0; m < n; m++) {

      for (j = 0; j < n; j++) {
         if (array[j] == array[m])
         ++count;
      }

      if (count > maxcount) {
         maxcount = count;
         maxvalue = array[m];
      }
   }

  printf("Moda = %d\n", maxvalue);

  fclose(fptr);
  return 0;
 }

