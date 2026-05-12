#include<iostream>
using namespace std;
void merge(int arr[], int l, int m, int r);

void mergesort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int leftarr[n1], rightarr[n2];

    for(int i = 0; i < n1; i++) {
        leftarr[i] = arr[l + i];
    }
    
    for(int i = 0; i < n2; i++) {
        rightarr[i] = arr[m + 1 + i];
    }

    int i = 0, j = 0, k = l;

    while(i < n1 && j < n2) {
        if (leftarr[i] <= rightarr[j]) {
            arr[k] = leftarr[i];
            i++;
        } else {
            arr[k] = rightarr[j];
            j++;
        }
        k++;
    }
    while(i < n1) {
        arr[k] = leftarr[i];
        i++;
        k++;
    }   
    while(j < n2) {
        arr[k] = rightarr[j];
        j++;
        k++;
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    mergesort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}