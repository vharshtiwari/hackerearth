#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)						//test cases loop
	{
	int n,d=0,w,l;
	scanf("%d",&n);
	int ar[n],ar1[n];
	for(int j=0;j<n;j++)			//array filling
	{
		scanf("%d",&ar[j]);
	}
	for(int p=0;p<n;p++)		// array loop 
	 {
	 	if(ar[p]==2) 						//2 filling
	 	{
	 		ar1[d]=2;
	 		d++;
	 	}
	   else
	   {
	   	for(int j=2;j<ar[p];j++)	// prime no. checking
	 	{ 
	 	  
	 	   if(ar[p]%j==0)
	 	   {
	 	    break;
	 	   }
	 	  else if(j==(ar[p]-1) && (ar[p]%j)!=0)
	 	  {
	 	  	ar1[d]=ar[p];
	 	  	d++; 	  		   // if prime than filling in differnt array
	 	  }
	 	}
	 }

	 } 
	 if(d==0)
	 	{
	 		printf("-1\n");
	 	}
	 	else {
	 	
	 for (int c =1 ; c<=d-1; c++) 
    {
    	int g=c;
    	while ( g > 0 && ar1[g]<ar1[g-1])
    	{
      		l = ar1[g];
      		ar1[g]=ar1[g-1];
      		ar1[g-1] = l;
    	  	g--;
    	  	}
    } 
   printf("%d",ar1[d-1]*ar1[d-1]);
    }
  }
}


