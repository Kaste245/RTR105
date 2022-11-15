#include<stdio.h>
#include<string.h>

 int main(){

    char i, l, count = 0, count2 = 0;
    char text[100];
    char b, a;

    b = 98;
    a = 97;

    printf("Ievadi tekstu ");
    fgets(text, sizeof(text), stdin);

//    printf("Enter a character to find its frequency: ");
//    scanf("%c", &b);

    for(i = 0; i < text[i] !='\0'; i++){
      if(text[i] == b)
         count++;
//      break;
    }

    for(l = 0; l < text[l] !='\0'; l++){
      if(text[l] == a)
         count2++;
//      break;
    }

    printf("Textā ir %d -> b \n", count);
    printf("Textā ir %d -> a \n", count2);










 return 0;
 }
