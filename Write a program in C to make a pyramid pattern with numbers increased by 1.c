#include <stdio.h>  
void main()  
{  
int i,j,rows, w=1;  
printf("Input number of rows: ");  
scanf("%d",&rows);  
int space = rows+4-1;  
for(i=1;i<=rows;i++)  
{  
for(int z=space; z>=1;z--) 
printf(" ");  
for(j=1;j<=i;j++,w++)  
printf("%d ",w);  
space=space-1;

printf("\n");  
}  
}