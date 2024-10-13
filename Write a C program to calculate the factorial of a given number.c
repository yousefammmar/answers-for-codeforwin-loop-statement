//Write a C program to calculate the factorial of a given number.
#include <stdio.h>
void main(){
    int num,sum,x,y;
    sum=1;
    printf("enter the number you want to find the fectorial for:");
    scanf("%d",&num);
    y=num;
    for(x=1;x<=num;x++){
    sum=sum*y;
    y--;
    }
    printf("the factorial for %d is %d",num,sum);
}