#include<stdio.h>
#include<math.h>

 int main(){

  float a, b, x, c, delta_x, funkca, funkcb, funkcx;
  int k = 0;


  printf("Ievadi vērtību a\n");
  scanf("%e", &a);

  printf("Ievadi vērtību b\n");
  scanf("%e", &b);

  printf("Ievadi vērtību c\n");
  scanf("%e", &c);

  printf("Ievadi precizitāti\n");
  scanf("%e", &delta_x);

  funkca = exp(a);
  funkcb = exp(b);

   /* if(funkca * funkcb > 0){

      printf("Intervala [%.2f : %.2f] exp(x) ", a, b);
      printf("Sakņu nav (Paru saknes)\n");
     }*/

    while((b - a) > delta_x){

    k++;
    x = (a + b) / 2;

    if(funkca * exp(x) > 0)
    a = x;
    else
    b = x;
     }

    printf("Interāciju skaits %d \n", k);
    printf("Pēc C exp(%7.3f) = %7.3f \n", c, exp(c));
    printf("Pēc X ar Dihotomijas metodi exp(%3f) = %3f \n", x, exp(x));

 return 0;
 }
