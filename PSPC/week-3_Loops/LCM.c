#include <stdio.h>

int LCM(int x,int y);

int main()
{
    int a,b;

    printf("enter two numbers:\n");
    scanf("%d %d",&a,&b);

    LCM(a,b);
}

int LCM(int x, int y)
{
    int i,max,GCD;

    max=(x>=y)? x:y;

    for(i=1;i<=max;i++)
    {
        if((x%i == 0)&&(y%i == 0))
        {
            GCD = i;
        }
    }

    printf("The LCM of %d and %d is %d", x,y, (x*y)/GCD);
}