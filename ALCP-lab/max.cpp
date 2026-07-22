//max min !

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<int, int> find_max_min(const vector<int> &arr, int i, int j) {
    if (i == j) {
        return {arr[i], arr[i]};
    }
    if (i == j - 1) {
        if (arr[i] < arr[j]) {
            return {arr[i], arr[j]};
        } else {
            return {arr[j], arr[i]};
        }
    }
    int mid = i + (j - i) / 2;
    pair<int, int> left = find_max_min(arr, i, mid);
    pair<int, int> right = find_max_min(arr, mid + 1, j);
    int final_min = min(left.first, right.first);
    int final_max = max(left.second, right.second);
    
    return {final_min, final_max};
}
      
int main() {
    int n = 0;
    cout << "Enter size: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Invalid size!" << endl;
        return 0;
    }
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int val;
        cout << "Enter element at " << i << ": "; 
        cin >> val;
        arr.push_back(val);
    }
    pair<int, int> ans = find_max_min(arr, 0, arr.size() - 1);
    cout << "Minimum element: " << ans.first << endl;
    cout << "Maximum element: " << ans.second << endl;
    return 0;
}