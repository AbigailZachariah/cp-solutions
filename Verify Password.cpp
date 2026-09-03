#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        bool flag = true;
        for (int i = 0; i < n - 1; i++)
        {
            // Condition: No digit after a letter
            if (isalpha(s[i]) && isdigit(s[i + 1]))
            {
                flag = false;
                break;
            }
            // Condition: Non-decreasing order for characters 
            if (s[i] > s[i + 1])
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
