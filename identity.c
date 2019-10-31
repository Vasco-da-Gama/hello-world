
#include<stdio.h>
int main(){
        int a[20][20],i,j,m,n;
        scanf("%d %d",&m,&n);
/*      for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                        scanf("%d",&a[i][j]);
                }
        }*/
        for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                        if(a[i]==a[j]){
                                printf("1");
                        }
                        else 
                                printf("0");
                }
        }
        for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                        printf("%d",a[i][j]);
                }
        }
        return 0;
}


