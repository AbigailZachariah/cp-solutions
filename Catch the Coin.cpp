#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;

        if(y>=-1){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}