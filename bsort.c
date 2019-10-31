#include<stdio.h>
int main(){
        int a[30];
        int n,i,j,k,temp;
        scanf("%d",&n);
        for(i=0;i<n;i++){
                scanf("%d",&a[i]);
        }
        for(j=0;j<n-1;j++){
                for(k=0;k<n-j-1;k++)
                {
                        if(a[k]>a[k+1]){
                                temp=a[k];
                                a[k]=a[k+1];
                                a[k+1]=temp;
                        }
                }
        }
        for(i=0;i<n;i++){
                printf("%d",a[i]);
                printf("\n");
        }
return 0;
}

