//C program to print natural numbers in reverse from 1 to n 
#include <stdio.h>
int main (){
    int num, lim;
    printf("enter the maximam number:");
    scanf("%d",&lim);
    
    for(num=1;num<=lim; num++){
        
    printf("%d\n",num);

    }
    return 0;
}