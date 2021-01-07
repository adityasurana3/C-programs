#include<stdio.h>
#include<string.h>
struct employee
{
    int salary;
    int unique_no;
    char name[20];
};

int main(){
    struct employee e1;
    printf("Enter salayr: ");
    scanf("%d",&e1.salary);
    printf("Enter id: ");
    scanf("%d",&e1.unique_no);
     printf("Enter name: ");
     scanf("%s",e1.name);
    gets(e1.name);
    printf("%d\n%d\n%s\n",e1.salary,e1.unique_no,e1.name);
   // printf("%s",e1.name);
    // struct employee e2;
    // e2.salary=1000000;
    // strcpy(e2.name,"Ram");
    // e2.unique_no=101;
    //     printf("%d\n%d\n%s\n",e2.salary,e2.unique_no,e2.name);

    // struct employee e3;
    // e3.salary=1000000;
    // strcpy(e3.name,"Hari");
    // e3.unique_no=101;
    //     printf("%d\n%d\n%s\n",e3.salary,e3.unique_no,e3.name);

    return 0;
}

