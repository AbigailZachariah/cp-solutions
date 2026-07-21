#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<long long> s;
        vector<long long> a;
        int n;
        cin >> n;

        int ele;
        for(int i = 1; i <= n; i++){
            cin >> ele;
            s.push_back(ele);
            a.push_back(ele);
        }
        sort(a.begin(),a.end());
        int max1=a[n-1];
        int max2=a[n-2];

        for(int i=0;i<n;i++){
            if(s[i]==max1) cout<<s[i]-max2<<" ";
            else cout <<s[i]-max1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}