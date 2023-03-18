// #include <stdio.h>

// int main()
// {

// int n ; 
// scanf ("%d",&n);

// int width = (2*n)-1;
// int patt[width*width] ;
// int  x =0 ;


// while (x < width )
// {
//     patt[x]= n ;
//     x++ ;
// }

// x = (width*(width -1));

// while (x < width*width)
// {
//     patt[x]= n;
//     x ++ ;
// }


// int init = 0 ;





// for (int i = 0 ; i < width*width ; i++)
// {
//     // patt[i]= n ;n-- ;
//     printf("%d ",patt[i]);







// }



// return 0 ;
// }




















// /*




// 3 3 3 3 3 
// 3 2 2 2 3
// 3 2 1 2 3 
// 3 2 2 2 3 
// 3 3 3 3 3


// 3 3 3 3 3   3 2 2 2 3   3 2 1 2 3   3 2 2 2 3   3 3 3 3 3

// -1 1 1 0        




// */



















// #include <stdio.h>

// void disp(int num )
// {
//     int rem ; 
//     while (num > 0)
//     {
//         rem = num % 10 ;
    
//         printf("%d ",rem);

//         num = num/10 ;

//     }
// }

// int main()
// {






// disp(51230);















//     return 0 ;
// }














































// #include<stdio.h>

// int main()
// {

// int n ; 
// scanf ("%d",&n);

// int width = (2*n)-1;
// int patt[width*width] ;
// int  x =0 ;


// while (x < width )
// {
//     patt[x]= n ;
//     x++ ;
// }

// x = (width*(width -1));

// while (x < width*width)
// {
//     patt[x]= n;
//     x ++ ;
// }


// int init = 0 ;




// int del = 1;
// for (int i = 0 ; i < width*width ; i++)
// {
//     if ( i == (del * width))
//     {printf("\n");
//     del ++ ;}

//     patt[i]= n ;
//     printf("%d ",patt[i]); 
 
// }



// return 0 ;
// }










// #include<stdio.h>




// int main()
// {

// int n ; 
// scanf ("%d",&n);

// int width = (2*n)-1;

// // creating sub array
// int sub[width*(width-1)] ;

// // setting all 0
// for (int i = 0 ; i < width*(width-1) ; i++)
// {
//     sub[i]= 0 ;
// }

// int x=0 , y =0 ; 


// int ewth = 0;
// for (int i = 1 ; i <= width/2 ; i++)
// {
    
//     for (int xc= (i+ ewth) ; xc< width-i+ewth ; xc++)
//     {
//         sub[xc]=-(1) ;
        
//     }

//     ewth = ewth + width;
 
// }

// int tem = 0 ;
// for (int xx = width*(width-1)-1 ; xx > width * (n-1) ; xx-- )
// {
//     sub[xx] = -sub[tem];
//     tem ++ ;


// }



// // creating real array

// int arr[width*width];
// for (int i=0 ; i < width ; i++){arr[i]=n;}

// int line = 0;

// while(line < width)
// {
//     for (int i=0 ; i< width ; i++)
//     {
//         arr[((line +1)*width)+i ] = arr[(line*width)+i ]+ sub[(line*width)+i];
//     }
    

//     line++ ;
// }




// // printing 

// int del = 1;
// for (int i = 0 ; i < width*(width) ; i++)
// {
//     if ( i == (del * width))
//     {printf("\n");
//     del ++ ;}

//     // sub[i]= n ;
//     printf("%d ",arr[i]); 
 
// }


// return 0 ;
// }

























#include <stdio.h>

int main()
{
    
int n ; 
scanf ("%d",&n);
int width = (2*n)-1;

int line[width];
int min[width];
for(int x = 0 ; x < width ; x++)
{min[x]=0; line[x]=n;}


for ( int i = 0 ; i < (width/2)+1 ; i++)
{
    for ( int j = 0 ; j < width ; j++)
    {
        printf("%d ",(line[i]-min[j]));

    }

    for(int j = i+1 ; j < width-(i+1) ; j++)
    {
        min[j]=min[j]+1;
    }

    printf("\n");
}


// second 









return 0 ;
}