#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int initial = 0;
        for (char c : s) if (c == '1') initial++;

        int added = 0;

        int i = 0;

        // handle prefix zeros
        if (s[0] == '0') {
            int len = 0;
            while (i < n && s[i] == '0') {
                len++;
                i++;
            }
            if (i == n) {
                // all zeros
                added += (len + 1) / 2;
                cout << added << "\n";
                continue;
            } else {
                added += len / 2;
            }
        }

        // middle segments
        while (i < n) {
            if (s[i] == '1') {
                int j = i + 1;
                int len = 0;
                while (j < n && s[j] == '0') {
                    len++;
                    j++;
                }

                if (j < n) {
                    // between two 1s
                    added += max(0, (len - 1) / 2);
                } else {
                    // suffix
                    added += len / 2;
                }

                i = j;
            } else {
                i++;
            }
        }

        cout << initial + added << "\n";
    }

    return 0;
}