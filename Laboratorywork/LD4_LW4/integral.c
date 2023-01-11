#include<stdio.h>
#include<math.h>

 int main(){

  float a, b, eps, rect, trap , simp, x, width, fx;
  int num, i;

  printf("Ievadi vērtību a\n");
  scanf("%f", &a);
  printf("Ievadi vērtību b\n");
  scanf("%f", &b);
  printf("Ievadi precizitāti\n");
  scanf("%f", &eps);

  num = (b - a) / eps;
  width = (b - a) / num;

  //Taisnastūra aprēķins
  rect = 0;
   for (i = 0; i < num; i++){

    x = a + i * width;
   fx = exp(x);
   if (fx > 0)
   rect += fx * width;
    }

  printf("Taisnastūra likuma vērtība %f\n", rect);

  //Trapeces aprēķins
  trap = 0;
   for (i = 0; i < num; i++){

    x = a + i * width;
    fx = exp(x);
    trap += (fx + exp(x + width)) * width / 2;
    }

  printf("Trapeces likuma vērtība %f\n", trap);

  //Simpsona aprēķins
  simp = 0;
   for (i = 0; i < num; i++){

    x = a + i * width;
    fx = exp(x);
    simp += (fx + 4 * exp(x + width / 2) + exp(x + width)) * width / 6;
   }

  printf("Simposna likuma vērtība %f\n", simp);

  return 0;
  }

