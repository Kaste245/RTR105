#include <stdio.h>

 int main(){

  char array[100], swap, d, n, c, i, min, max, total, j, l;

  printf("Ievadi kādu daudzumu vēlies sakārtot\n");
  scanf("%hhd", &n);

  printf("Ievadi %hhd simbolus \n", n);

  for (c = 0; c < n; c++)
    scanf("%c", &array[c]);

  for (c = 0 ; c < n - 1; c++){

    for (d = 0 ; d < n - c - 1; d++){

      if (array[d] > array[d+1]){

        swap = array[d];
        array[d] = array[d+1];
        array[d+1] = swap;
      }
    }
  }
   //Vidēja vērtība

   total = 0;

   for(l = 0; l < n; l++) {
      total += array[l];
   }

  printf("Videjā vērtība = %d \n", total/n);

  printf("Sakārtot augošā secībā:\n");

  for (c = 0; c < n; c++)
     printf("%d \n", array[c]);

    min=max=array[0];
    for(i=1; i<n; i++)
    {
         if(min > array[i])
	  min = array[i];
         if(max < array[i])
          max = array[i];
    }
     printf("Minimālā vērtība ir %d\n", min);
     printf("Maksimālā vērtība ir %d\n", max);

  return 0;
 }

