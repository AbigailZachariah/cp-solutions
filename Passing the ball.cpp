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
        cin>>s;

        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                cnt+=(i+1);
                break;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}