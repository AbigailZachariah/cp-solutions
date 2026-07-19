#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;

        vector<int> lower_case,upper_case;
        vector<bool>removed(str.length(),false);
        string s="";
        for(int i=0;i<str.length();i++){
            if(str[i]=='b'){
                if(!lower_case.empty()){
                    removed[lower_case.back()]=true;
                    lower_case.pop_back();
                }
            }
            else if(str[i]=='B'){
                if(!upper_case.empty()){
                    removed[upper_case.back()]=true;
                    upper_case.pop_back();
                }
            }
            else{
                if(islower(str[i])) lower_case.push_back(i);
                else upper_case.push_back(i);
            }
        }
        for(int i=0;i<str.length();i++){
            if(str[i]!='b' && str[i]!='B' && !removed[i]){
                s+=str[i];
            }
        }
        cout<<s<<"\n";
    }
    return 0;
}