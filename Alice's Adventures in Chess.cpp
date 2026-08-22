#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        string s;
        cin>>s;

        int loops =0;
        bool found=false;
        int x=0,y=0;
        while(!found && loops<100){
            for(int i=0;i<n;i++){
                if(s[i]=='N'){
                    y=y+1;
                } 
                else if(s[i]=='E'){
                    x=x+1;
                }
                else if(s[i]=='S'){
                    y=y-1;
                }
                else {
                    x=x-1;
                }
                if(x==a && y==b) {
                    found=true;
                    break;
                }
            }
            if(found)break;

            loops++;
        }
        if(found)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}