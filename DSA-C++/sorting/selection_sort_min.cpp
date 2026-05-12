#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

/* Selection sort by taking smallest number and swapping it with the lowest index element and sorting the array*/

void selectionSort(int a[],int n){
    for(int i = 0;i<n ;i++){
        int min= i;
        for(int j=i;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        if(i!=min){
            swap(a[min],a[i]);
        }
    }
}

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selectionSort(a,n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}