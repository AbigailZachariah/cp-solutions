#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<long long> a;
        int n, q;
        cin >> n >> q;

        long long curr_sum = 0;
        int ele;
        
        for(int i = 1; i <= n; i++){
            cin >> ele;
            curr_sum += ele;
            a.push_back(curr_sum);
        }

        long long total_sum = a[n - 1];

        while(q--){
            long long i1, i2, i3;
            cin >> i1 >> i2 >> i3;

            long long sum_beforeR1;
            if (i1 > 1) {
                sum_beforeR1 = a[i1 - 2];
            } else {
                sum_beforeR1 = 0;
            }

            long long old_range = a[i2 - 1] - sum_beforeR1;
            long long new_range = (i2 - i1 + 1) * i3;
            long long sum = total_sum - old_range + new_range;

            if(sum % 2 != 0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}