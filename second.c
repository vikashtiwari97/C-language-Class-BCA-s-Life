// SI=(P*R*T)/100

#include<stdio.h>

int main(){
    int p,r,t,si;
    // si=(p*r*t)/100;               //10*5=50*10=500/100=5;
    printf("What is the value of p\n");
    scanf("%d", &p);    // & taking address 
    printf("What is the value of r\n");
    scanf("%d", &r); 
    printf("What is the value of t\n");
    scanf("%d", &t); 
    printf("SI=%2d\n",(p*r*t)/100);
    return 0;
}