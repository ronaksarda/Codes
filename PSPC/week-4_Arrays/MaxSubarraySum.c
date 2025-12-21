#include <stdio.h>

int MaxSum(int a[], int n);

int main()
{
    int a[] = {-2,1,-3,4,-1,2,1,-5,4};
    
    int Size = sizeof(a)/sizeof(a[0]);

    MaxSum(a,Size);
}

int MaxSum(int a[], int n)
{
    int i;
    int current = a[0];
    int max = a[0];

    for(i=1;i<n;i++)
    {
        if(current + a[i] < a[i])
        {
            current = a[i];
        }

        else{
            current = current + a[i];
        }

        if(current > max)
        {
            max = current;
        }
    }

    printf("%d", max);
}