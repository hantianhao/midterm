#include<stdio.h>
int main()
{
    int c;
    int r,l;
    r = l = 0;
    printf("请输入任意10个非负整数:");
    while((c = getchar()) != EOF)
    {
        if(c == ' ')
        {
            if(r > l)
            l = r;
            r = 0;
        }
        else if(c =='\n')
        {
            if(r > l)
            l = r;
            r = 0;
            break;
        }
        else
        r = r *10 + (c-'0');
    }
    printf("The max is %d\n",l);
}