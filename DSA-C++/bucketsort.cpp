#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bucketSort(float arr[],int n){
    vector<float> buckets[n];
    for(int i=0;i<n;i++){
        int bucket_index = n*arr[i];
        buckets[bucket_index].push_back(arr[i]);
    }
    for(int i=0;i<n;i++){
        sort(buckets[i].begin(),buckets[i].end());
    }
    int index = 0;
    for(int i=0;i<n;i++){
        for(float val: buckets[i]){
            arr[index++] = val;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    float arr[n];
    cout<<"Enter the elements (between 0 and 1): ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Original array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bucketSort(arr,n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;   
}