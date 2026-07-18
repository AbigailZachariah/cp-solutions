#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>a;
        int n;
        cin>>n;

        int ele;
        for(int i=0;i<n;i++){
            cin>>ele;
            a.push_back(ele);
        }
        int m;
        cin>>m;

        for(int i=0;i<m;i++){
           string str;
           cin>>str;

           if(a.size()!=str.length()){
                cout<<"NO\n";
           }
           else {
                map<int,char>num_to_char;
                map<char,int>char_to_num;
                bool flag=true;
                
                for(int i=0;i<n;i++){
                    int num=a[i];
                    char ch=str[i];

                    //check if mapped before && if mapped checking if mapped to different char
                    if(num_to_char.count(num) && num_to_char[num]!=ch){
                        flag=false;
                        break;
                    }
                    if(char_to_num.count(ch) && char_to_num[ch]!=num){
                        flag=false;
                        break;
                    }
                    num_to_char[num]=ch;
                    char_to_num[ch]=num;
                }
                if(flag) cout<<"YEs\n";
                else cout<<"No\n";
           }
        }
    }
    return 0;
}