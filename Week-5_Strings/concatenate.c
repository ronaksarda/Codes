#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int main(int argc, char *argv[]) 
{ 
char name1[20],name2[20]; 

printf("\n Enter first string"); 
scanf("%s",name1); 

printf("\n Enter second string"); 
scanf("%s",name2); 

strcat(name2,name1); 

printf("\n string1=%s  string2=%s",name1,name2); 

return 0; 
}