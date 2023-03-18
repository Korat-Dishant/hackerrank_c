#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char str[1001];  
    scanf("%[^\n]",str);
    int count[10] = {0}; // initial val 0
    int tem = 0 ; 
    // char c ;

    for (int i=0 ; i< strlen(str) ; i++)
    {

        if(isdigit(str[i]))
        {
           tem = str[i]-'0';
            // printf(" tem = %d ",tem);
            count[tem]= count[tem] + 1 ;
            // printf("\nthis is digit at i = %d",i);
        }

    }

            // printf("\ncount is %d ",count[5]);




    // printf("\n\n\nstr = %s",str);

    // for (int i=0 ; i< 10 ; i++)
    // printf("\ncount %d = %d",i,count[i]);
    
        for (int i=0 ; i< 10 ; i++)
        printf("%d ",count[i]);

    return 0;
}












// #include<stdio.h>
// #include <stdlib.h>

// int main() {
//     // Converting a numeric string
//     char str[10] = "122";
//     int x = atoi(str);
//     printf("Converting asci %d:int  %d\n",str[10], x);

//     return 0;
// }




// #include<stdio.h>
// #include <stdlib.h>

// int main() {
//     // Converting a numeric string
//     char str[10] = "122";
//     int x = atoi("0545");
//     printf("Converting asci %d:int  %d\n",str[10], x);

//     return 0;
// }