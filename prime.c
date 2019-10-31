
#include<stdio.h>
int main(){
        int i,n,j,temp;
        scanf("%d",&n);
        for(i=1;i<=n;i++){
                temp=0;
                for(j=1;j<i/2;j++){
                        if(j%i==0){
                                temp=1;
                                break;
                        }
                }
                if(temp==0){
                        printf("%d\n",i);
                }
        }
                return 0;
}

