#include <stdio.h>

int main()

{
    int n,i,a[1000];

    printf("enter the number of array elements:\n");
    scanf("%d", &n);

    printf("enter the array elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }


    printf("the even numbers are:\n");

    for(i=0;i<n;i++)
    {
        if(a[i] % 2 == 0)
        {
            printf("%d\n", a[i]);
        }
    }
}