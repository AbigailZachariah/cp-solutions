#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n,m,r,c;
        cin>>n>>m>>r>>c;

        long long sum=(m-c)*1+(n-r)*m+(n-r)*(m-1);
        cout<<sum<<"\n";
    }
    return 0;
}