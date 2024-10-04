//C program to print natural numbers in reverse from n to 1
#include <stdio.h>
int main (){
    int num, lim;
    printf("enter the maximam number:");
    scanf("%d",&lim);
    for(num=lim;num>0;num--)
    printf("%d\n",num);
 
    return 0;
}