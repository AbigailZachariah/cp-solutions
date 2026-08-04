#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        vector<int>nums;
        int n,m;
        cin>>n>>m;

        vector<string>s;
        string str;
        for(int i=0;i<n;i++){
            cin>>str;
            s.push_back(str);
        }

        int cnt=0;
        int j=0;
        while(j<n && s[j].length()<=m){
            cnt++;
            m=m-s[j].length();
            j++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
