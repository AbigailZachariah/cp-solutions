#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        vector<int>x;
        int n;
        cin>>n;

        int ele;
        int maxi=0;
        for(int i=0;i<n;i++){
            cin>>ele;
            x.push_back(ele);
        }

        if(n>2)cout<<"NO\n";
        else if(n==2) {
            if (abs(x[0]-x[1])>1)cout<<"YES\n";
            else cout<<"NO\n";
        }
        
    }
    return 0;
}