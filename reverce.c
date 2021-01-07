#include<stdio.h>
int reverse(int *arr, int n);



int main(){
int arr[5];
int i;
for(i=0;i<5;i++){
    printf("Enter %d number\n",i+1);
    scanf("%d",&arr[i]);
}
reverse(arr, 5);
for(i=0;i<5;i++){
    printf("The value if %d is %d\n",i,arr[i]);
}
return 0;
}
int reverse(int *arr, int n){
    int i,temp;
    for(i=0;i<(n/2);i++){
       temp=arr[i];
       arr[i]=arr[5-i-1];
       arr[5-i-1]=temp; 
    }
}