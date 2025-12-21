#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int main(int argc, char *argv[]) 
{ 
char name1[20],name2[20]; 

int n; 

printf("\n Enter first string"); 
scanf("%s",name1); 

printf("\n Enter second string"); 
scanf("%s",name2); 

n=strcmp(name2,name1); 

if(n==0) 
{ 
printf("\n strings are equal");   
} 

else 
{ 
printf("\n strings are not equal"); 
} 

return 0; 
}