#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        vector<int> nums;
        int n;
        cin >> n;

        vector<int> a;
        int ele;
        for (int i = 0; i < n; i++){
            cin >> ele;
            a.push_back(ele);
        }

        int cnt = 0;
        int pieces = 0;

        for(int i=0;i<n;i++){
            pieces+=a[i];

            long long root= round(sqrt(pieces));
            if(root*root==pieces && root%2!=0){ // pieces-1 ==>added the initial 1 in layer 1
                cnt++;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}