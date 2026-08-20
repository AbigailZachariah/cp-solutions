#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        vector<int>a;
        int n;
        cin>>n;

        int ele;
        for(int i=0;i<n;i++){
            cin>>ele;
            a.push_back(ele);
        }
        bool flag=false;
        for(int i=0;i<n-1;i++){
            if(abs(a[i]-a[i+1])==5||abs(a[i]-a[i+1])==7) flag=true;
            else {
                flag=false;
                break;
            }
        }
        if(flag)cout<<"Yes\n";
        else cout<<"NO\n";
    }
    return 0;
}