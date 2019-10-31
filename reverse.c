#include<stdio.h>
int main()
{ int arr[]={1,2,334,2,34,2,312,4,335,3};
	int start=0,end=9,i,temp;
	while(start<end)
	{	temp=arr[start];
	       arr[start]=arr[end];
	       arr[end]=temp;
	       start++;
	       end--;}
	for(i=0;i<10;i++)
		printf("%d\n",arr[i]);
	
	return 0 ;
}

