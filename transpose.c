#include<stdio.h>
int main(){
        int a[20][20],b[20][20],i,j,m,n;
        printf("Enter the size of array\n");
        scanf("%d %d",&m,&n);
        printf("Enter elements of Array\n");
        for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                        scanf("%d",&a[i][j]);
                }
                printf("\n");
        }
        for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                        b[j][i]=a[i][j];
                }
        }
        printf("So the Transpose is:\n");
        for(i=0;i<n;i++){
                for(j=0;j<m;j++){
                        printf("%d ",b[i][j]);
                }
                printf("\n");
        }
        return 0;
}

