#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        bool all_same = true;
        for (int i = 1; i < s.length(); i++){
            if (s[i] != s[0]){
                all_same = false;
                break;
            }
        }

        if (all_same){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            for (int i = 1; i < s.length(); i++){
                if (s[i] != s[0]){
                    swap(s[0], s[i]);
                    break;
                }
            }
            cout << s << "\n";
        }
    }
    return 0;
}