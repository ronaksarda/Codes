#include <stdio.h>

int main()

{
    int a[1000];

    int n,i,sum=0;

    printf("enter the number of subjects:\n");
    scanf("%d", &n);


    for(i=0;i<n;i++)
    {
        printf("enter the subject marks:\n");
        scanf("%d", &a[i]);
    }

    printf("the subject marks are:\n");

    for(i=0;i<n;i++)
    {
        printf("%d\n", a[i]);
    }

    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    
    printf("The grade percentage is:");

    printf("%d",((sum)/100)*n);


}