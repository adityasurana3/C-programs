#include<stdio.h>
void encrypt(char *s)
{
        printf("dup: %u",&s);

    char *ptr=s;
    while (*ptr!='\0')
    {
        *ptr=*ptr+1;
        *ptr++;
    }
    

}
int main()
{
    char s[]="aditya";
    int *p=&s;
        printf("org: %u\n",*(&p));

    encrypt(s);
    printf("%s\n",s);
    return 0;
}