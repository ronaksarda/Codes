#include <stdio.h>
#include <math.h>

int main()

{
    double a,b,c;
    double D,Root1, Root2;
    
    printf("For the quadratic equation of the form (ax2+bx+c=0)\n");
    printf("enter the values of a,b and c:\n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    D = b*b - 4*a*c;

    if(D>=0)
    {
        Root1 = (-b + sqrt(D))/(2*a);
        Root1 = (-b - sqrt(D))/(2*a);

        printf("the roots of the given equation are\nRoot(x) = %.2lf\nRoot(y) = %.2lf\n", Root1,Root2);
    }

    else{
        printf("the equation has no real roots!");
    }

    return 0;
}