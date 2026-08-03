#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums;

    int t;
    cin >> t;

    while (t--)
    {
        vector<int> nums;

        int n;
        cin >> n;

        for (int i = 1; i <= 2 * n; i++)
        {
            if (nums.size() == 0)
            {
                nums.push_back(i);
            }
            else if (i % 2 != 0 && nums.size() < n)
            {
                nums.push_back(i);
            }
        }

        for (int j = 0; j < nums.size(); j++)
        {
            cout << nums[j] << " ";
        }
        cout<<"\n";
    }
    return 0;
}