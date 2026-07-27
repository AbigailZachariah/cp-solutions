#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        vector<int> a;
        int n;
        cin >> n;

        int ele;
        for (int i = 0; i < n; i++){
            cin >> ele;
            a.push_back(ele);
        }
        bool adjascent_zeroes=false;
        for(int i=0;i<n-1;i++){
            if(a[i]==0 && a[i+1]==0){
                adjascent_zeroes=true;
                break;
            }
        }

        bool all_zero=true;
        bool all_ones=true;
        for(int i=0;i<n;i++){
            if(a[i]==0)all_ones=false;
            if(a[i]==1)all_zero=false;
        }

        if(adjascent_zeroes || all_ones ||all_zero )cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}