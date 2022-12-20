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

  funkca = exp(a); funkcb = exp(b);

    if(funkca * funkcb < 0){

      printf("Intervals [%.2f : %.2f] exp(x) ", a, b);
      printf("Sakņu nav (Paru saknes)\n");
      return 1;
     }

  printf("exp(%7.3f) = %7.3f \t\t\t\t", a, exp(a));
  printf("exp(%7.3f) = %7.3f \n", b, exp(b));

    while((b - a) > delta_x){

    k++;
    x = (a + b) / 2;
    if(funkca * exp(x) > 0)
    a = x;
    else
    b = x;

    printf("%2d iteracija : exp(%7.3f) = %7.3f \t\t", k, a, exp(a));
    printf("exp(%7.3f) = %7.3f \t", x, exp(x));
    printf("exp(%7.3f) = %7.3f \n", b, exp(b));

     }

  printf("exp(%7.3f) = %7.3f \n", c, exp(c));

  printf("Sakne atrodas pie x = %3f, jo exp(x) = %3f \n", x, exp(x));

 return 0;
 }
