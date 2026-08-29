#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        
        int min_row = n, max_row = -1;
        int min_col = m, max_col = -1;

        for (int i = 0; i < n; i++) {
            string row;
            cin >> row;
            for (int j = 0; j < m; j++) {
                if (row[j] == '#') {
                    min_row = min(min_row, i);
                    max_row = max(max_row, i);
                    min_col = min(min_col, j);
                    max_col = max(max_col, j);
                }
            }
        }

        //+1==> converting to 1 based index
        int center_row = (min_row + max_row) / 2 + 1;
        int center_col = (min_col + max_col) / 2 + 1;

        cout << center_row << " " << center_col << "\n";
    }
    
    return 0;
}