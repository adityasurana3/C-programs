#include<stdio.h>
int main(){
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int i,n=5,table;
//printf("Enter the table\n");
//scanf("%d",&n);
for(i=1;i<10;i++)
{
    table=n*arr[i];
    //printf("%d\n",arr[i]);
    printf("%d*%d=%d\n",n,i,table);

}
return 0;
}