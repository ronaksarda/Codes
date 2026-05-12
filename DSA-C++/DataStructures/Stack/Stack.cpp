#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    stack<int> st1;
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        st1.push(x);
    }
    stack<int> st2;
     cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        st1.push(x);
    }
    //to check if the stacks are same
    if(st1==st2){
        cout<<"Stacks are same"<<endl;
    }
    else{
        cout<<"Stacks are different"<<endl;
    }
    return 0;
}