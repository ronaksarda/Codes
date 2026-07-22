#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void boyerMoore(string text, string pat) {
    int n = text.length(), m = pat.length();
    vector<int> badChar(256, -1);

    for (int i = 0; i < m; i++) badChar[(int)pat[i]] = i;

    int s = 0; 
    while (s <= (n - m)) {
        int j = m - 1;
        while (j >= 0 && pat[j] == text[s + j]) j--;

        if (j < 0) {
            cout << "Pattern found at index " << s << endl;
            s += (s + m < n) ? m - badChar[(int)text[s + m]] : 1;
        } else {
            s += max(1, j - badChar[(int)text[s + j]]);
        }
    }
}

int main() {
    boyerMoore("ABABDABACDABABCABAB", "ABABCABAB");
    string text = "ABABDABACDABABCABAB";
    string pat = "ABABCABAB";
    if (text.find(pat) != string::npos) {
        cout << "Pattern found\n";
    } else {
        cout << "Pattern not found\n";
    }
    return 0;
}