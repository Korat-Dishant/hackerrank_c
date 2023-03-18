#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    int n ;
    scanf("%d",&n);
    
    // allocation memory to array dynamically in heap
    int *arr = (int*)malloc(n*sizeof(int));

    // initializing values to array
    for(int i=0 ; i< n ; i++)
    {
        scanf("%d",&arr[i]);
    }


    // performing sum without using extra variable
    for(int i =0 ; i< n-1 ; i++)
    {
        arr[i+1]=arr[i]+arr[i+1];
    }

    // printing anser 
    printf("%d",arr[n-1]);




    // freeing memory alocated to array
    free(arr);







    return 0;
}