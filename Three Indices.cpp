#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int>permutation;
        int p;
        cin>>p;

        int ele;
        for(int i=0;i<p;i++){
            cin>>ele;
            permutation.push_back(ele);
        }
        //If any valid non-consecutive triplet exists in the array then a valid consecutive triplet exists as well
        bool found=false;
        for(int i=1;i<p-1;i++){
            int first=permutation[i-1];
            int second=permutation[i];
            int third=permutation[i+1];

            if(first<second && second>third){
                cout<<"YES\n";
                cout<<i<<" "<<i+1<<" "<<i+2<<"\n";
                found=true;
                break;
            }    
        }
        if(found==false)cout<<"NO\n";
    }
    return 0;
}