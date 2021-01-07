// #include<stdio.h>
// int main()
// {
//     char str[50];
//    int i=0;
//     printf("Enetr string: ");
//     scanf("%s",str);
//     while (str[i]!='\0')
//     {
//         i++;
// printf("%d",i);
//     }
//     printf("the length of string is %d\n",i);
//     printf("the entered string is %s\n",str);

//     return 0;
// }


#include<stdio.h>
int leng(char *str){
//char str[50];
int i=0;
    while (str[i]!='\0')
    {
        i++;
    }
    
    
    printf("the length of string is %d\n",i);
    printf("the entered string is %s\n",str);
    
}
int main()
{
    char *str[50];
  // int i=0;
    printf("Enetr string: ");
    scanf("%s",*str);
    leng(*str);
    
    return 0;
}