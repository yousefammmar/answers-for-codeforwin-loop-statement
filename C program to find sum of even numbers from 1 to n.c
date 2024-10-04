//C program to find sum of even numbers from 1 to n
#include <stdio.h>
int main (){
    int i,sum,lim;
    printf("enter the maximum number you want to sum");
    scanf("%d",&lim);
    sum=0;
    for(i=1;i<=lim;i++){
        if(i%2==0)
        sum=sum+i;
    }
    printf("the total sum of all even numbers in this rang is =%d",sum);
    return 0;
}