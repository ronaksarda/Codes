//binary search

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int binarySearch(vector<int> &arr , int &target ,int  l ,int  r){
        int mid = l + (r-l)/2;
        if(arr[mid] ==  target) return mid;
        else if(arr[mid] < target) binarySearch(arr,target,mid+1,r);
        else binarySearch(arr,target,l,mid-1);
    return -1; 
}

int main(){
    vector<int> arr;
    cout << " enter size : ";
    int n;
    cin >> n;
    for(int i = 0 ; i < n;i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int target ;
    cout << " Enter target: ";
    cin  >> target;
    int ans =  binarySearch(arr,target,0,n-1);
    if(ans != -1) cout << " found at " << ans <<endl;
    else cout << " not found!";
    return 0;
}
