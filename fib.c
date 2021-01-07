#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;
    printf("Enter the fib series you want to generate");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        c=a+b;
        a=b;
        b=c;
         printf("%d\t",a);

    }
             printf("\n");


    return 0;
}