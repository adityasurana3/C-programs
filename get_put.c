#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter string:");
  // scanf("%s",str); //No us eof scanf when we use gets.
    gets(str);
    puts(str);
    printf("%s",str);
    return 0;
}