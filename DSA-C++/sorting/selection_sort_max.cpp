#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

/* Selection sort by taking biggest number and swapping it with the highest index element and sorting the array*/

void selectionSort(int a[],int n){
    for(int i = n-1;i>= 0 ;i--){
        int maxindex= 0;
        for(int j=1;j<=i;j++){
            if(a[j]>a[maxindex]){
                maxindex=j;
            }
        }
        swap(a[maxindex],a[i]);
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