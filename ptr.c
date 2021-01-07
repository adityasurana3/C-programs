#include<stdio.h>
int main(){
     double i = 9;
     double *ptr = &i;
     double **k =&ptr;
     printf("Value of i is %g\n",i);
     printf("Value of i is %g\n",*(&i));
     printf("Value of i at ptr is %g\n",*ptr);
     printf("Value of i from k is %g\n",**k);
     printf("Address of i is %u\n",&i);
     printf("Address of i from p is %u\n",ptr);
     printf("Address of i from k is %u\n",*k);
     printf("Value at ptr is %u\n",ptr);
     printf("Value at ptr from k is %u\n",k);
     printf("Value at ptr actual is %u\n",*(&ptr));
     printf("Adress of ptr is %u\n",&ptr);
     printf("Adress of ptr from k is %u\n",k);
     printf("Value of k is %u\n",k);
     printf("Value of k is %u\n",*(&k));
     printf("Address of k is %u\n",&k);




return 0;
}