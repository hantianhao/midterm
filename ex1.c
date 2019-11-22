#include<stdio.h>
#define IN 1
#define OUT 0
int main()
{
    int c,state,nw;
    state = OUT;
    printf("请输入长度不超过50字符单位的字符:");
    while((c = getchar()) != '\n')
    {
        if((c >=' '&& c <= '@') || (c >='[' && c <= 96) || c >= '{')
        state = OUT;
        else if(state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("The number of words is:%d\n",nw);
}