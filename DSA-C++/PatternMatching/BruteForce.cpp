#include <iostream>
#include <string>

using namespace std;

void bruteForce(string text, string pat) {
    int n = text.length();
    int m = pat.length();

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pat[j]) break;
        }
        if (j == m) cout << "Pattern found at index " << i << endl;
    }
}

int main() {
    bruteForce("ABABDABACDABABCABAB", "ABABCABAB");
    return 0;
}