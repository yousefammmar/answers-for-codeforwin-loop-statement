//C program to find sum of natural numbers from 1 to n
#include <stdio.h>
int main (){
    int i,sum;
    printf("enter the maximum number you want to sum");
    scanf("%d",&i);
    sum=0;
    for(;i>0;i--){
        sum=sum+i;
    }
    printf("the total sum of all the numbers in this rang is =%d",sum);
    return 0;
}