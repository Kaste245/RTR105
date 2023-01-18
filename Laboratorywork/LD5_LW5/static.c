#include<stdio.h>
#include<string.h>
#include<stdlib.h>


  int compare(const void* a, const void* b){

    return *(char*)a - *(char*)b;
  }

  int main(){

    char array[100], min, max;
    float median, avg;
    int len, i, sum = 0, frequency[256] = {0}, count = 1;

    printf("Ievadi simbolu rindu: ");
    scanf("%[^\n]s", array);

    len = strlen(array);

    qsort(array, len, sizeof(char), compare);

     //MIN, MAX

     min = array[0];
     max = array[len - 1];

    for (i = 0; i < len; i++){

        sum += array[i];
        frequency[array[i]]++;
    }

     //Videjā vērtība

     avg = (float)sum / len;

     //Mediana

    if (len % 2 == 0)
      median = (array[len/2] + array[len/2 - 1])/2.0;
    else
      median = array[len/2];

     //Moda

  int mode[len], maxCount = 0, modeCount = 0;

    for (i = 0; i < len; i++)
      mode[i] = -1;

    for (i = 0; i < len; i++){

        if (array[i] == array[i + 1])
            count++;

        else{

            if (count > maxCount){

                maxCount = count;
                modeCount = 0;
                mode[modeCount] = array[i];
            }
            else if (count == maxCount){

                modeCount++;
                mode[modeCount] = array[i];
            }
            count = 1;
        }
    }

    FILE *fule = fopen("statistic.txt", "w");

    if (fule == NULL)
    {
        printf("ERROR");
        return 0;
    }

    printf("Minimālā vērtība: %d\n", min);
    printf("Maksimālā vērtība: %d\n", max);
    printf("Videjā vērtība: %.2f\n", avg);
    printf("Mediānas vērtība: %.2f\n", median);
    printf("Modu vērtības: ");

    for (i = 0; i <= modeCount; i++)
        printf("%d ", mode[i]);

    printf("\nSimbolu rinda augošā secībā: %s\n", array);
    printf("ASCII atbilstošas vērtības: ");

    for (i = 0; i < len; i++)
      printf("%d ", array[i]);

    printf("\n");

    for (i = 0; i < 256; i++){

        if (frequency[i] > 0)
            fprintf(fule, "%d %d\n", frequency[i], i);
    }

    fclose(fule);

    return 0;
}

