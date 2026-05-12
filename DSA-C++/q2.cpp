#include<iostream>
using namespace std;

//Merge Sort Algorithm

void merge(int arr[],int left,int mid,int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int LeftArray[n1], RightArray[n2];
    for(int i=0;i<n1;i++){
        LeftArray[i] = arr[left + i];
    }
    for(int j=0;j<n2;j++){
        RightArray[j] = arr[mid + 1 + j];
    }
    int i = 0, j = 0, k = left;
    while(i < n1 && j < n2){
        if(LeftArray[i] <= RightArray[j]){
            arr[k] = LeftArray[i];
            i++;
        }
        else{
            arr[k] = RightArray[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        arr[k] = LeftArray[i];
        i++;
        k++;
    }
    while(j < n2){
        arr[k] = RightArray[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int left,int right){
    if(left < right){
        int mid = left + (right - left) / 2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}

int main(){
    int n;
    int arr[100];
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}