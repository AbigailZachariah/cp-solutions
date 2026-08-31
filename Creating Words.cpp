#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string a;
        string b;

        cin>>a>>b;

        char first_a=a[0];
        char second_b=b[0];

        a.at(0)=second_b;
        b.at(0)=first_a;

        cout<<a<<" "<<b<<"\n";
    }
    return 0;
}