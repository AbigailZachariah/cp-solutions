#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        
        bool inserted=false;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                char New=(s[i]=='x')?'y':'x';
                s.insert(i,1,New);
                inserted =true;
                break;
            }
        }
        if(!inserted){
            char New=(s[0]=='x')? 'y':'x';
            s.insert(0,1,New);
        }     
        cout<<s<<"\n";   
    }
    return 0;
}