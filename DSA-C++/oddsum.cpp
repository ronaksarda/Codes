#include<iostream>
using namespace std;

int sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0)
            sum+=arr[i];
    }
    return sum;
}

int main(){
    int arr[100];
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Sum of odd elements is: " << sum(arr,n) << endl;
    return 0;
    
}