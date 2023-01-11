#include<stdio.h>

 int main(){

   int i_value = 1;
   printf("i_value = (found by indentificator) %d \n", i_value);
   printf("sizepof(i_value) = %ld (bytes) \n", sizeof(i_value));

   int *i_pointer = &i_value;
   printf("i_pointer (address) = %p \n", i_pointer);
   printf("i_value (found by address) = %d \n", *i_pointer);
   printf("sizepof(i_pointer) = %ld (bytes) \n", sizeof(i_pointer));

   *i_pointer = *i_pointer + 1;
   printf("i_value = (found by indentificator, after incremnet) %d \n", i_value);



   double d_value = 1.3e-3;
   printf("\n\nd_value = (found by indentificator) %f \n", d_value);
   printf("sizepof(d_value) = %ld (bytes) \n", sizeof(d_value));

   double *d_pointer = &d_value;
   printf("d_pointer (address) = %p \n", d_pointer);
   printf("d_value (found by address) = %f \n", *d_pointer);
   printf("sizepof(d_pointer) = %ld (bytes) \n", sizeof(d_pointer));

   *d_pointer = *d_pointer + 0.25;
   printf("d_value = (found by indentificator, after incremnet) %f \n", d_value);

  return 0;
 }
