#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool validParentheses(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if (st.empty()) return false;
            char top = st.top();
            st.pop();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    return st.empty();
}

int main(){
    string s;
    cout << "Enter a string of parentheses: ";
    cin >> s;

    if (validParentheses(s)) {
        cout << "The parentheses are valid." << endl;
    } else {
        cout << "The parentheses are invalid." << endl;
    }
    return 0;
}