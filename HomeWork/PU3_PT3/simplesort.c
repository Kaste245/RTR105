#include<stdio.h>
#include <string.h>

 int  main()
 {

    char str1[1], str2[1], str3[1];

    printf("Provide 3 values:\n");
    scanf("%s %s %s",str1 ,str2 ,str3);

    if (str1 <= str3 && str1 <= str2){
       if(str2 <= str3){
            printf("%s, %s, %s\n", str1, str2, str3);
        }
        else{
            printf("%s, %s, %s\n", str1, str3, str2);
        }
    }
    else{
        if(str2 <= str1 && str2 <= str3){
            if(str1 <= str3){
                printf("%s, %s, %s\n", str2, str1, str3);
            }
            else{
                printf("%s, %s, %s\n", str2, str3, str1);
            }
        }
        else{
            if(str2 <= str1){
                printf("%s, %s, %s\n", str3, str2, str1);
            }
            else{
                printf("%s, %s, %s\n", str3, str1, str2);
            }
        }
    }
   return 0;
 }
