#include<stdio.h>
int fact(int n);
int main(){
	int n,result;
	scanf("%d",&n);
	result=fact(n);
	printf("%d\n",result);
	return 0;
}
int fact(int n){
	int i,temp=1;
	for(i=1;i<=n;i++){
		temp=temp*i;
	}
	return temp;
}



