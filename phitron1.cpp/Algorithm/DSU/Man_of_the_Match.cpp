#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t)
    {
        vector<pair<int, int>> players(22);


        for (int i = 0; i < 22; ++i)
        {
            int runs, wickets;
            cin >> runs >> wickets;
            players[i] = {runs, wickets};
        }

        int maxScore = -1;
        int indexOfMax = -1;
        for (int i = 0; i < 22; ++i)
        {
            int score = players[i].first + players[i].second * 20;
            if (score > maxScore)
            {
                maxScore = score;
                indexOfMax = i + 1;
            }
        }

        cout << indexOfMax << endl;
    }

    return 0;
}
