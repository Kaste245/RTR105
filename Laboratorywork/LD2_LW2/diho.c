#include<stdio.h>
#include<math.h>

 int main(){

  float a, b, x, c, delta_x, funkca, funkcb, A = 1;
  int k = 0;

  printf("Ievadi vērtību a\n");
  scanf("%f", &a);

  printf("Ievadi vērtību b\n");
  scanf("%f", &b);

  printf("Ievadi vērtību c\n");
  scanf("%f", &c);

  printf("Ievadi precizitāti\n");
  scanf("%f", &delta_x);

  funkca = exp(a) - A;
  funkcb = exp(b) - A;

    if(funkca * funkcb > 0){

      printf("Intervala [%.2f : %.2f] exp(x) ", a, b);
      printf("Sakņu nav (Pāru saknes)\n");
     }

    else{

      while(fabs(exp(x) - c) > delta_x){

       if(exp(x) > c)
       b = x;
       else
       a = x;

       k++;
       x = (a + b) / 2;
      }

    printf("Interāciju skaits %d \n", k);
    printf("c = exp(x) --> %f = %.5f \n", c, exp(x));
    printf("Pēc x ar Dihotomijas metodi exp(%3f) = %3f \n", x, exp(x));
    }

 return 0;
 }
