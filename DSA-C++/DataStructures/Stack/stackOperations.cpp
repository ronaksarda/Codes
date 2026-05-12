#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void display(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main(){
    vector<int> vec1;
    int size;
    cout<<"Enter the number of elements in vector: ";
    cin>>size;
    cout<<"Enter the elements: ";
    for(int i=0; i<size; i++){
        int x;
        cin>>x;
        vec1.push_back(x);
    }
    stack<int> st1;
    for(int i=0; i<size; i++){
        st1.push(vec1[i]);
    }
    display(st1);
    st1.pop();
    st1.pop();
    display(st1);
    return  0;
}