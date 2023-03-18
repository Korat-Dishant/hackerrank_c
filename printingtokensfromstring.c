#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    
    

    for(int i=0 ; i<strlen(s) ; i++)
    {
        if(isspace(s[i])!=0)
        {
            s[i]='\n';
        }
        // printf("\nfor i %d isspace = %d",i,isspace(s[i]));
        // printf("\ni = %c",s[i]);
    }

        printf("%s",s);

    
    return 0;
}