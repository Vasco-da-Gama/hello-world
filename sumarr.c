
#include<stdio.h>
int main(){
        int a[10][10],b[10][10],c[10][10],m,n,i,j;
        printf("Enter size of arrays\n");
        scanf("%d %d",&m,&n);
        printf("Scan the no of elements of first array:\n");
        for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                        scanf("%d",&a[i][j]);
                }

        }
        printf("Scan the no of elements of second array:\n");
        for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                        scanf("%d",&b[i][j]);
                }
        }
        printf("Required array is:\n");
        for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                        c[i][j]=a[i][j]+b[i][j];
                }
        }
        for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                        printf("%d ",c[i][j]);
                }
                printf("\n");
        }
        return 0;
}

