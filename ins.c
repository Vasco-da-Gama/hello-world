#include<stdio.h>
int main()
{ int i,j,n,key;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{ scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++)
	{ key=arr[i];
	for(j=i;j>0 && arr[j-1]>arr[j];j--)
		arr[j]=arr[j-1];
	 arr[j]=key;
	}
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	return 0;
   }
	
