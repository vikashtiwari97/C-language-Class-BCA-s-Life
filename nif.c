/*
if(condition)
{
    if(condition)
    {
        statement;
    }
    else
    {
        statement;
    }
}
else
{
    statement;
}
*/
#include<stdio.h>

int main(){
    int age;
    printf("What is the age: ");
    scanf("%d",&age);
    if(age>=18)  // 14>18 true
    {
        if(age<=50)   //60<=50 false
        {
            printf("You can drive\n");
        }
        else // access
        {
            printf("you are above 50 can't drive");
        }
    }
    else // driect access
    {
        printf("You are teen ager\n");
    }
    return 0;
}