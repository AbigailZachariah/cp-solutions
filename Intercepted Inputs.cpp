#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        vector<int>a;
        unordered_set<int>s;// q-> n and m are in the k integers
        int k;
        cin>>k;

        int ele;
        for(int i=0;i<k;i++){
            cin>>ele;
            a.push_back(ele);
            s.insert(ele);
        }

        int target=k-2;

        for (auto x:a){
            if(target%x==0){
                int y=target/x;

                if(x==y){
                    int cnt=0;
                    for(auto it :a){
                        if(it==x) cnt++;
                    }
                    if(cnt>=2) {
                        cout<<x<<" "<<y<<"\n";
                        break;
                    }
                }
                else{
                    if(s.find(y)!=s.end()){
                        cout<<x<<" "<<y<<"\n";
                        break;
                    }
                }
            }
        }
    }
    return 0;
}