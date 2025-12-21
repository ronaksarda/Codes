#include <stdio.h>

int main()

{
    float a,b,c,d,e;

    printf("enter the marks of the subject PHYSICS:\n");
    scanf("%f", &a);

    printf("enter the marks of the subject CHEMISTRY:\n");
    scanf("%f", &b);

    printf("enter the marks of the subject BIOLOGY:\n");
    scanf("%f", &c);

    printf("enter the marks of the subject MATHEMATICS:\n");
    scanf("%f", &d);

    printf("enter the marks of the subject COMPUTER:\n");
    scanf("%f", &e);

    float avg = (a+b+c+d+e)/5;

    if(avg>=90)
    {
        printf("your grade is A!\n");
    }

    else if( avg >=80 && avg <90)
    {
        printf("your grade is B!\n");
    }

    else if( avg >=70 && avg <80)
    {
        printf("your grade is C!\n");
    }

    else if( avg >=60 && avg <70)
    {
        printf("your grade is D!\n");
    }

    else if( avg >=50 && avg <60)
    {
        printf("your grade is E!\n");
    }

    else{
        printf("you are FAILED!\n");
    }

    printf("your avarage is = %.2lf", avg);

    return 0;
}