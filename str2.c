#include<stdio.h>
#include<string.h>
int main(void)
{   char arr[]="welcome to the programming class";
	int i,len= strlen(arr);
       for(i=len-1;i>=0;i--)
       { if(arr[i]==' ')
          { arr[i]='\0';
            printf("%s",&arr[i+1]);
          }
    printf("%s\n",arr);
       }
   return 0;
}   
