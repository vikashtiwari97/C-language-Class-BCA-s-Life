/*Arithmatic operator
    + - / * %

Relation Operators
== <= >= < > !=

logical operator
&& * 1*1=1 0*1=0
|| + 
! oppsite
*/

#include<stdio.h>

int main(){
    int a=10, b=2;
    // printf("+ = %d\n",a+b);
    // printf("- = %d\n",a-b);
    // printf("* = %d\n",a*b);
    // printf("/ = %d\n",a/b);
    // printf("% = %d\n",a%b);
    // printf("A==b %d\n",a==b);
    // printf("A>=b %d\n",a>=b);
    // printf("A<b %d\n",a<b);
    // printf("A<=b %d\n",a<=b);
    // printf("A!=b %d\n",a!=b);
    // printf("A>b %d\n",a>b);
    printf("A>b && A!=b %d\n",a>b && a!=b);
    printf("A<b && A!=b %d\n",a<b && a!=b);
    printf("A>b || A!=b %d\n",a>b || a!=b);
    printf("A<b || A!=b %d\n",a<b || a!=b);
    printf("A>b != A!=b %d\n",(a>b) != (a!=b));
    return 0;
}