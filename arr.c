#include<stdio.h>
int main()
{
    int arr[5];
    int *ptr = &arr[0];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the 10 interger arr\n");
        scanf("%d",&arr[i]);
    }
     for(i=0;i<5;i++)
    {
        printf("The 10 entered array are %d\n",arr[i]);
    }
            printf("the valur of 1st element is %d and address is %u\n",arr[0],ptr);
           ptr=ptr+2;
             printf("the valur of 1st element is %d and address is %u\n",arr[2],ptr);


    return 0;
}