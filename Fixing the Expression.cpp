#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        if(s[0]<s[2]){
            s[1]='<';
        }
        else if(s[0]>s[2]){
            s[1]='>';
        }
        else{
            s[1]='=';
        }
        cout<<s<<"\n";
    }
    return 0;
}