#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        map<char,int>mpp;
        int n;
        cin>>n;

        string s;
        cin>>s;

        int cnt=0;
        for(int i=0;i<n;i++){
            if(mpp.count(s[i])){
                mpp[s[i]]++;
            }
            else mpp[s[i]]=2;
        }
        
        for (auto it:mpp){
            cnt+=it.second;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}