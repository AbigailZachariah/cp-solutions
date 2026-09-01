#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a,b,c;
        cin>>a>>b>>c;

        int r=0;
        bool found=false;
        if(a==b || a==c || b==c){
            found=true;
        }
        while (!found){
            if(a>b && a>c)a--;
            else if (b>a && b>c)b--;
            else c--;

            if(a<b && a<c)a++;
            else if (b<a && b<c)b++;
            else c++;
            
            r++;

            if(a==b || a==c || b==c){
            found=true;
            break;
            }
        }
        cout<<r<<"\n";
    }
    return 0;
}