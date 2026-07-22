#include<iostream>
#include<vector>
using namespace std;

//Quick sort implementation with last element as pivot

int partition(vector<int> &arr, int low, int high) { 
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


int main(){
    vector<int> arr;
    int n;
    cout << " Enter array size: ";
    cin >> n; 

    for(int i = 0 ; i < n; i++){
        int val;
        cin >> val;
        arr.push_back(val);
    }
    quickSort(arr,0,arr.size()-1);
    for(int x : arr){
        cout << x << " ";
    }
    return 0;

}