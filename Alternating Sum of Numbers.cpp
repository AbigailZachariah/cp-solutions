#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        vector<int> a;

        int n;
        cin>>n;

        int ele;
        for(int i=0;i<n;i++){
            cin>>ele;
            a.push_back(ele);
        }

        int sum=0;
        for(int i=0;i<n;i++){
            if((i+1)%2!=0) sum+=a[i];
            else sum=sum-a[i];
        }

        cout<<sum<<"\n";

    }
    return 0;
}