#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max(int x,int y,int z,int w)
{

if(x >= y && x >= z && x >=w ) return x ;
if(y >= x && y >= z && y >=w ) return y ;
if(z >= y && z >= x && z>=w ) return z ;
if(w >= y && w >= z && w >=x ) return w ;
    
    
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}