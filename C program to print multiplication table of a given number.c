//C program to print multiplication table of a given number
#include <stdio.h>
int main (){
    int i,num,sum;
    printf("enter the number you want to mutiply");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        sum=i*num;
        printf("%d * %d = %d\n",num,i,sum);
    }
    return 0;
}