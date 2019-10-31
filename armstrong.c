#include<stdio.h>
int main(){
        int n,temp,rem,s=0;
        scanf("%d",&n);
        temp=n;
        while(temp!=0){
                rem=temp%10;
                s=s+rem*rem*rem;
                temp/=10;
        }
        if(s==n){
                printf("Armstrong number\n");
        }
        else
                printf("Not an Armstrong number\n");
        return 0;
}


