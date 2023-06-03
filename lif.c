/*
if(condition)
{
    statement;
}
else if(contition)
{
    statment;
}
else
{
    statement;
}
*/
#include<stdio.h>

int main(){
    int a ,b , c, big;
    printf("What is the three number\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b) //5>6 false
    {
        big=a;
    }
    else if(b>c) // 6>7 false
    {
        big=b;
    }
    else  // c= 7;
    {
        big=c;    // big = 7;
    }
    printf("Biggest number is %d\n",big);
    return 0;
}