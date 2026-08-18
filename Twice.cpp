#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int>a;
        map<int,int>mpp;

        int ele;
        for(int i=0;i<n;i++){
            cin>>ele;
            a.push_back(ele);
            if(mpp.find(ele)!=mpp.end())mpp[ele]++;
            else mpp[ele]=1;
        }

        int maxi=0;

        for(auto it:mpp){
            maxi+=it.second/2;
        }
        cout<<maxi<<"\n";
    }
    return 0;
}