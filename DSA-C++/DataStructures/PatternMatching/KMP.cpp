#include <iostream>
#include <vector>
#include <string>

using namespace std;

void computeLPS(string pat, vector<int>& lps) {
    int len = 0, i = 1;
    lps[0] = 0;
    while (i < pat.length()) {
        if (pat[i] == pat[len]) lps[i++] = ++len;
        else if (len != 0) len = lps[len - 1];
        else lps[i++] = 0;
    }
}

void KMP(string text, string pat) {
    int n = text.length(), m = pat.length();
    vector<int> lps(m);
    computeLPS(pat, lps);

    int i = 0, j = 0;
    while (i < n) {
        if (pat[j] == text[i]) { i++; j++; }
        if (j == m) {
            cout << "Pattern found at index " << i - j << endl;
            j = lps[j - 1];
        } else if (i < n && pat[j] != text[i]) {
            if (j != 0) j = lps[j - 1];
            else i++;
        }
    }
}

int main() {
    KMP("ABABDABACDABABCABAB", "ABABCABAB");
    return 0;
}