#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        if(x==0){
            cout<<0<<"\n";
        }

        else{
            int temp=x;
            int n=10;//n can only be equal to 0,....,9
            while(temp>0){
                int r=temp%10;
                n=min(n,r);
                temp=temp/10;
            }
            cout<<n<<"\n";
        }
    }
    return 0;
}