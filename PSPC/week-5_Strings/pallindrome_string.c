#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int main(int argc, char *argv[]) 
{ 
char str1[10],str2[10]; 
int n; 

printf("\n Enter a string"); 
gets(str1); 

strcpy(str2,str1); 

strrev(str2); 

n=strcmp(str1,str2); 

if(n==0) 
{ 
printf("\n Palindrome"); 
}

else 
{ 
printf("\n Not palindrome"); 
} 

return 0; 
} 