#include <stdio.h>

int main() {
    int n;
    printf("enter number of elements:\n");
    scanf("%d", &n);

    int a[10];

    int i;
    printf("enter the elements:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int mr = a[n - 1];

    printf("%d ", mr);

    

    for (i=n-2;i>= 0;i--) {
        if (a[i] >= mr) {
            mr = a[i];
            printf("%d ", a[i]);
        }
    }

    printf("\n");
    return 0;
}
