/*if(condition)
{
    statements;
}
else
{

}*/
#include<stdio.h>

int main(){
    int age;
    printf("What is the age: ");
    scanf("%d",&age);
    if(age>=18)  // 12>18 false
    {
        printf("You can drive\n");
    }
    else // driect access
    {
        printf("You can't drive\n");
    }
    return 0;
}