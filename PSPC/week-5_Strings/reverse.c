#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int main(int argc, char *argv[]) 
{ 
char str1[10],str2[10]; 

printf("\n Enter a string"); 
gets(str1); 

strcpy(str2,str1); 

strrev(str2); 

printf("\n %s reverse is %s",str1,str2); 

return 0; 
}