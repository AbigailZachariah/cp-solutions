#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    vector<char>room(10,'0');
    
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            int j=0;
            while(room[j]=='1'){
                j++;
            }
            room[j]='1';
        }
        else if(s[i]=='R'){
            int k=9;
            while(room[k]=='1'){
                k--;
            }
            room[k]='1';;
        }
        else{
            room[s[i]-'0']='0';//ASCII ch
        }
    }
    for(auto it:room){
        cout<<it;
    }
    cout<<"\n";
    return 0;
}