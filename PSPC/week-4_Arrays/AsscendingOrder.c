#include <stdio.h>

int Bubble(int a[], int n);

int main()
{
    int a[] = {1,3,2,4,5};

    int size = sizeof(a)/sizeof(a[0]);

    Bubble(a,size);
}

int Bubble(int a[], int n)
{
    int i,j;
    int temp;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
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