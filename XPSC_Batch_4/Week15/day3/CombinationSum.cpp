/**
 *    author:  Mohammad Jashim Uddin
 **/
#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define yy cout << "Yes" << endl;
#define N cout << "NO" << endl;
#define nn cout << "No" << endl;
#define one cout << "1" << endl;
#define onee cout << "-1" << endl;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void backtrack(vector<int> &candidates, int target, vector<vector<int>> &result, vector<int> &combination, int start)
{
    if (target == 0)
    {
        result.push_back(combination);
        return;
    }
    if (target < 0)
    {
        return;
    }

    for (int i = start; i < candidates.size(); ++i)
    {
        combination.push_back(candidates[i]);
        backtrack(candidates, target - candidates[i], result, combination, i);
        combination.pop_back();
    }
}
vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> result;
    vector<int> combination;
    backtrack(candidates, target, result, combination, 0);
    return result;
}
int main()
{
    int n, s;
    cin >> n >> s;
    vector<int> candidates(n);
    for (int i = 0; i < n; i++)
    {
        cin >> candidates[i];
    }
    vector<vector<int>> result = combinationSum(candidates, s);
    
    for(auto v : result)
    {
        for(auto x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}