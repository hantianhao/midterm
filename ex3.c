#include<stdio.h>
int main()
{
    unsigned long a = 1;
    unsigned int b =0;
    while(a >0)
    {
        a = a<<1;
        b =b +1;
    }
    printf("unsigned long int is size of %u bit. The max is %u, the min is %u\n",b,a-1,a);
}    