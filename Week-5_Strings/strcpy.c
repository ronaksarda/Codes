#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int main(int argc, char *argv[]) 
{ 
char name1[20],name2[20]; 

int len; 

printf("\n Enter a string"); 
scanf("%s",name1);

strcpy(name2,name1); 

printf("\n String1=%s String2=%s ",name1,name2); 

return 0; 
}