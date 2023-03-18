#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

double area(triangle temp)
{
	double sum = temp.a + temp.b + temp.c ; 
    double p = (sum)/2 ;
    
    return sqrt(p*(p-temp.a)*(p-temp.b)*(p-temp.c));
}

void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    
    for (int i=0 ; i< n-1 ; i++)
    {
        triangle swp ;

		for (int j = i ; j < n ; j++)
		{	
			if(area(tr[i])>area(tr[j]))
			{
				// tr[i]= swp;
				// tr[i]=tr[i+1];
				// tr[i+1]=swp ;

				 swp.a = tr[i].a ;
				 swp.b = tr[i].b ;
				 swp.c = tr[i].c ;
				
				tr[i].a=tr[j].a;
				tr[i].b=tr[j].b;
				tr[i].c=tr[j].c;

				tr[j].a=swp.a ;
				tr[j].b=swp.b ;
				tr[j].c=swp.c ;



			}
		}
    }
    
    
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);

	printf("\n\n\n");


	for (int i = 0; i < n; i++) {
		printf("%d %d %d\t\t area = %lf\n", tr[i].a, tr[i].b, tr[i].c , area(tr[i]));
	}




		// printf("\n\n\n");
		// triangle ttt;
		// ttt.a = 1;
		// ttt.b=1 ;
		// ttt.c = 1;

		// printf("%d %d %d = %lf",ttt.a,ttt.b,ttt.c,area(ttt));



	return 0;
}