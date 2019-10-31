#include<stdio.h>
#include<math.h>
int main()
{ int n,i,count=0,sum=0,temp,j,temp2,rem,rem2,temp3;
	scanf("%d",&n);
	temp3=n;
	while(temp3!=0)
	{ temp=temp3%10;
		rem=pow(temp,3);
		temp3/=10;
		sum=sum+rem;
	}
	if(sum==n)
		printf("it is armstrong no\n");
	else
		printf("it is not\n");
return 0;
}


