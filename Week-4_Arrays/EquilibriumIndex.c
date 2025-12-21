#include <stdio.h>

int main() {

    int a[1000] = {3,4,8,-9,20,6};
    int sum = 0;
    int l = 0;

    for (int i = 0; i < 6; i++) {
        sum += a[i];
    }

    for (int i = 0; i < 6; i++) {
        int r = sum - l - a[i];
        if (l == r) {
            printf("%d\n", i);
            return 0;
        }
        l += a[i];
    }

    printf("-1\n");
    return 0;
}
