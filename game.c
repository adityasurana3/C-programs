#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int guess,number,nguesses=1;
    srand(time(0));
    number = rand()%10+1;
    //printf("%d\n",number);
    do{
        printf("Guess the number: \n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower value than %d: \n",guess);
        }
        else if (guess<number)
        {
            printf("Higher Value than %d: \n",guess);
        }
        else{
            printf("You gussed the number in %d attemps \n",nguesses);
        }
        nguesses++;
    }while(guess!=number);
}
