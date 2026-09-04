#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string b;
        cin >> b;

        string r = "";
        for (char c : b) {
            if (r.find(c) == string::npos) {
                r += c;
            }
        }
        sort(r.begin(), r.end());

        string s = "";
        int len = r.length();
        for (int i = 0; i < n; i++) {
            int idx = r.find(b[i]);
            s += r[len - 1 - idx];
        }
        
        cout << s << "\n";
    }
    return 0;
}