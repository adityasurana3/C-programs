#include<stdio.h>
int main(){
	int arr[5];
	int *ptr = &arr[0];
	int i;
	for(i=0;i<5;i++){
		printf("Enter the value of student %d\n",i+1);
		scanf("%d",ptr);
		ptr++;
	}
	for ( i = 0; i < 5; i++)
	{
		printf("The marks of student %d is: %d\n",i+1,arr[i]);
	}
	

	
	return 0;

}