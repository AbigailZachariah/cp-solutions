#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int win = n;
        int matches = 0;
        int lose = 0;

        while (win>1 || lose>1){
            int win_matches=win/2;
            matches+=win_matches;

            int lose_matches=lose/2;
            matches+=lose_matches;

            int next_round=win-win_matches;
            int lost_teams=win_matches;//teams that lost in winners group
            int remain_losers=lose-lose_matches;//those who won in the losers match or didnt play

            win=next_round;
            lose=remain_losers+lost_teams;
        }
        if(win==1 && lose==1)matches+=1; // last match
        cout<<matches<<"\n";
    }
    return 0;
}