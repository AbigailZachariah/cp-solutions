#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        vector<int>nums;
        int n;
        cin>>n;

        int height;
        for(int i=0;i<n;i++){
            cin>>height;
            nums.push_back(height);
        }

        int mini=nums[0];
        long long sum=nums[0];

        for(int i=1;i<n;i++){
            mini=min(mini,nums[i]);
            sum+=mini;
        }
        cout<<sum<<"\n";
    }
    return 0;
}