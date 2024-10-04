//C program to print all even numbers from 1 to n
#include <stdio.h>
int main(){
    int i,lim; 
    printf("enter the limit");
    scanf("%d",&lim);
     printf("the even numbers in this range are");
    for(i=1;i<=lim;i++){
        if(i%2==0)
    printf("%d\n",i);
    }
    return 0;
}