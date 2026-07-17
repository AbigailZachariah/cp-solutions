#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>a;
        int n;
        cin>>n;

        string str="";

        int ele;
        for(int i=0;i<n;i++){
            cin>>ele;
            a.push_back(ele);
        }
        
        vector<int>prefix_min(n);
        prefix_min[0]=INT_MAX;
        for(int i=1;i<n;i++){
            prefix_min[i]=min(prefix_min[i-1],a[i-1]);
        }

        vector<int>suffix_max(n);
        suffix_max[n-1]=INT_MIN;
        for(int i=n-2;i>=0;i--){
            suffix_max[i]=max(suffix_max[i+1],a[i+1]);
        }
        for(int i=0;i<n;i++){
            if(prefix_min[i]<a[i]&&suffix_max[i]>=a[i]){
                str+='0';
            }
            else str+='1';
        }
        cout<<str<<'\n';
    }
    return 0;
}