#include<stdio.h>
int main()
{   int arr[]={1,2,4,3,5,7,9,8};
	int n=9,i,end=8,sum=0;
	int total=n*(n+1)/2;
	for(i=0;i<8;i++)
	sum=sum+arr[i];

	total=total-sum;
	printf("%d\n",total);
	return 0;
}

