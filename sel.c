#include<stdio.h>
int main()
{ int n,i,j,temp,min;
	scanf("%d",&n);
	int arr[n];                         
	for(i=0;i<n;i++)
	{scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{  min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[min]>arr[j])
			min=j;
		
		}
		if(arr[min]!=arr[i])
		  {temp=arr[i];
                  arr[i]=arr[min];
                   arr[min]=temp;
		  }
        		 
	}
	for(i=0;i<n;i++)
	 printf("%d ",arr[i]);
	return 0;
}
