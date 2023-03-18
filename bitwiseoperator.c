#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.



int and (int x , int y ){
	return x&y ;
}

int or (int x , int y){
	return x|y ;
}

int xor(int x , int y){
return x^y ;
}

void calculate_the_maximum(int n, int maxres) {
  //Write your code here.

	int maxor;
	int maxand;
	int maxxor;

	int inc = 0 ; 
	for (int i = 1 ; i < n ; i++ )
	{
		for (int j = i+1 ; j <= n ; j++)
		{
			inc ++ ;
		}
	}

	int aor[inc+1];
	int aand[inc+1];
	int axor[inc+1];



	inc = 0 ; 
	for (int i = 1 ; i < n ; i++ )
	{
		for (int j = i+1 ; j <= n ; j++)
		{

			// printf(" %d %d \n",i,j);

			aor[inc]= or(i,j);
			aand[inc]= and(i,j);
			axor[inc]= xor(i,j);

			printf("\ninc = %d , i = %d , j = %d , inc = %d ,aor= %d , aand= %d , axor= %d",inc,i,j,inc,aor[inc],aand[inc],axor[inc]);
			inc ++ ;
		}
	}




	maxand = 0;
	maxor = 0;
	maxxor = 0;


	for(int i = 0 ; i <inc ; i++)
	{
		printf("\n %d loop iteration , ",i);
		// logic for max or 
		if(aor[i]>maxor && aor[i]<maxres)
		{
			printf("\n\t\t\t %d is less than maxres %d and greater than aor[%d]=%d",aor[i],maxres,i,aor[i]);
			maxor = aor[i];
		}

		// logic for max and 
		if(aand[i]>maxand && aand[i]<maxres)
		{
			printf("\n\t\t\t %d is less than maxres %d and greater than aand[%d]=%d",aand[i],maxres,i,aand[i]);
			
			maxand = aand[i];
		}
	
		// logic for max or 
		if(axor[i]>maxxor && axor[i]<maxres)
		{
			printf("\n\t\t\t %d is less than maxres %d and greater than aor[%d]=%d",axor[i],maxres,i,axor[i]);

			maxxor = axor[i];
		}


	}



	printf("\nmaxand = %d",maxand);
	printf("\nmaxor = %d",maxor);
	printf("\nmaxxor = %d",maxxor);



}






int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

	// printf("\n\n1 and 3 = %d\n1 or 3 = %d\n1 xor 3 = %d",and(1,3),or(1,3),xor(1,3));
 
    return 0;
}
