#include <stdio.h>

int main()

{
    int num[1000] = {}, n,i,sum=0;
    float avg;

    printf("enter the value of n:\n");
    scanf("%d", &n);

    printf("enter the values:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d", &num[i]);
    }
    
    for(i=0;i<n;i++)
    {
        sum = sum + num[i];
    }

    avg = (float)sum / n;
    
    printf("the avarage of the above numbers is:%f", avg);

    return 0;
}