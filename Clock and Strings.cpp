#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        int count = 0;
        int curr = (a % 12) + 1;
        while (curr != b) {
            if (curr == c || curr == d) {
                count++;
            }
            curr = (curr % 12) + 1;
        }
        
        if (count == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}