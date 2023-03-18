#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char a;
    char s[110];
        char sen[110];

    scanf("%c",&a);
    scanf("%s",&s);
   
       scanf("\n");

    // scanf("%[^\n]%*c",&sen);
    scanf("%[^\n]%*c",sen);

    // scanf("\n");
    // scanf("%[^\n]s",sen);


    printf("%c \n",a);
    printf("%s \n",s);
    printf("%s",sen);
     
    return 0;
}





// #include<stdio.h>
// #define MAX 500

// int main(){

//     char arr[MAX];

//     printf("Enter any sentence which can include spaces.\n");
//     printf("To exit press enter key.\n");
//     scanf("%[^\n]s",arr);

//     printf("You had entered: \n");
//     printf("%s",arr);

//     return 0;
// }