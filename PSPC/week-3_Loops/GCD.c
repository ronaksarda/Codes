#include <stdio.h>

int main()

{
    int a,b,GCD,max;

    printf("enter the values of a and b:\n");
    scanf("%d %d",&a,&b);
    
    int i;

    max=(a>b)? a:b;
    
    for(i=1;i<=max;i++)
    {
        if((a%i == 0) && (b%i == 0))
        {
            GCD = i;
        }
    }

    printf("GCD = %d", GCD);

    return 0;
}