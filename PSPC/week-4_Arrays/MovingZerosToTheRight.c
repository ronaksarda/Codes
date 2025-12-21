#include <stdio.h>

int MoveZeros(int a[], int n);

int main()
{
    int a[] = {1,0,2,0,3,0,5,4};

    int size = sizeof(a)/sizeof(a[0]);
    
    MoveZeros(a,size);
}

int MoveZeros(int a[], int n)
{
    int i,j,temp;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j] == 0 && a[j+1] != 0)
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