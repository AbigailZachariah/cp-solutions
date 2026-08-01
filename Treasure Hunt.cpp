#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long x, y, a;
        cin >> x >> y >> a;

        bool flag = false;
        double sum = 0;
        
        // Calculate how much a full 2-day cycle digs (Little B + Little K)
        long long cycle_sum = x + y;
        double target = a + 0.5;

        if (cycle_sum > 0 && sum < target) {
            long long cycles = (target - sum) / cycle_sum;
            if (cycles > 0) {
                sum += cycles * cycle_sum;
            }
        }

        while(sum < a + 0.5){
            sum += x;
            flag = false;
            if(sum < a + 0.5){
                sum += y;
                flag = true;
            }
            else{
                break;
            }
        }

        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}