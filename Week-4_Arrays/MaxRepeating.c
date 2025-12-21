#include <stdio.h>

int maxrep(int a[], int n);

int main()
{
    int a[] = {2,2,1,1,2,2,2};

    int size = sizeof(a)/sizeof(a[0]);

    maxrep(a,size);

}

int maxrep(int a[], int n)
{
    int i, mcount = 1, ccount = 1;
    int m = a[0];

    for(i=1;i<n;i++)
    {
        if(a[i] == a[i-1])
        {
            ccount++;
        }

        else{
            ccount = 1;
        }

        if(ccount > mcount)
        {
            mcount = ccount;
            m = a[i];
        }
    }

    printf("%d", m);
}
