#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<pair<int, int>> cats;
        for (int i = 0; i < m; ++i)
        {
            int l, r;
            cin >> l >> r;
            cats.push_back({l, r});
        }

        sort(cats.begin(), cats.end());

        int max_cats = 0;
        int prev_end = 0;
        for (int i = 0; i < m; ++i)
        {
            int l = cats[i].first;
            int r = cats[i].second;

            if (prev_end < l)
            {
                max_cats += l - prev_end - 1;
                prev_end = l - 1;
            }

            if (r > prev_end)
            {
                int feedable_cats = min(r, n) - max(prev_end, l) + 1;
                max_cats += feedable_cats;
                prev_end = r;
            }
        }

        max_cats += n - prev_end;

        cout << max_cats << endl;
    }

    return 0;
}
