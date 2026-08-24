#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,int>mpp;

    int a,b;
    cin>>a>>b;

    for(int i=1;i<=3;i++){
        mpp[i]=0;
    }
    mpp[a]++;
    mpp[b]++;
    
    for(auto it :mpp){
        if(it.second==0) cout<<it.first;
    }
    return 0;
}