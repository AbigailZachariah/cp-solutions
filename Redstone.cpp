#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>gears;
        map<int,int>mpp;
        int n;
        cin>>n;

        int ele;
        for(int i=0;i<n;i++){
            cin>>ele;
            gears.push_back(ele);
        }

        for(int i=0;i<n;i++){
            mpp[gears[i]]++;
        }

        bool found=false;
        for(auto it:mpp){
            if(it.second>=2){
                found=true;
                break;
            }
        }
        if(found) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
