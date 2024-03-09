#include <bits/stdc++.h>
using namespace std;

int subset_sum_min_diff(int i, int sum, int t_sum, vector<int> arr, vector<vector<int>> &memo, int coin_count)
{

    if (i >= arr.size())
    {
        if (coin_count == 0)
            return abs((t_sum - sum) - sum);
        else
            return INT_MAX;
    }
    if (coin_count > 0)
    {
        int aux1 = subset_sum_min_diff(i + 1, sum + arr[i], t_sum, arr, memo, coin_count - 1);
        int aux2 = subset_sum_min_diff(i + 1, sum, t_sum, arr, memo, coin_count);
        return min(aux1, aux2);
    }
    else
    {
        return subset_sum_min_diff(i + 1, sum, t_sum, arr, memo, coin_count);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (n % 2 == 0)
        {
            int coin_count = n / 2;

            vector<vector<int>> memo(n + 1, vector<int>(sum + 1, -1));
            cout << subset_sum_min_diff(0, 0, sum, arr, memo, coin_count) << endl;
        }
        else
        {
            int coin_count = n / 2;
            vector<vector<int>> memo(n + 1, vector<int>(sum + 1, -1));
            cout << subset_sum_min_diff(0, 0, sum, arr, memo, coin_count + 1) << endl;
        }
    }

    return 0;
}