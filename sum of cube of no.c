#include<stdio.h>
int main(){
       int n,temp,rem,result,sum=0;	
	scanf("%d",&n);
	temp=n;
	while(temp!=0){
		rem=temp%10;
		result=rem*rem*rem;
		sum=sum+result;
		temp=temp/10;
	}
	printf("%d",sum);
	return 0;
}
