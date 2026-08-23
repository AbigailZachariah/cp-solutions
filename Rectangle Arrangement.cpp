#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int width=0;
        int height=0;
        for(int i=0;i<n;i++){
            int w,h;
            cin>>w>>h;

            width=max(width,w);
            height=max(height,h);
        }

        int perimeter=2*(width+height);
        cout<<perimeter<<"\n";
    }
    return 0;
}