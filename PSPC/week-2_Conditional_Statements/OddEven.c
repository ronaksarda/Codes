#include <stdio.h>

int sort(int a[], int n);

int main()
{
    int a[] = {3,5,6,4,7};

    int size = sizeof(a)/sizeof(a[0]);

    sort(a,size);
}

int sort(int a[], int n)
{
    int i,j;
    int temp;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j] %2 == 0)
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
}