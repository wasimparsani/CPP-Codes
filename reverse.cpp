#include <stdio.h>
//#include <stdlib.h>

int main() {
    int n,d,i,t,j;
	scanf("%d",&t);
	while(t--)
	{	
	    j=0;
	    scanf("%d %d",&n,&d);
	    int a[n],b[n];
	    //a=(int*)malloc(n*sizeof(int));
	    //b=(int*)malloc(n*sizeof(int));
	    for (i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	        if (i >= d)
	        {
	          b[j]=a[i]; 
	          j++;
	        }
	    }
	    
	    for (i=0;i<d;i++)
	    {
	        b[j]=a[i];
	        j++;
	    }
	    
	    for(i=0;i<n;i++)
	    {
	        printf("%d ",b[i]);
	    }
	    printf("\n");
	}
	return 0;
}
