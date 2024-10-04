//C program to print all odd numbers from 1 to 100 
#include <stdio.h>
int main(){
    int i,lim; 

     printf("the odd numbers in this range are");
    
    for( i=1;i<=100;i++){
        if(i%2!=0)
    printf("%d\n",i);
 
    }
    return 0;
}