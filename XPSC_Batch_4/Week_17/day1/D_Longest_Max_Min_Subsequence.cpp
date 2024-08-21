
/**
 *    author:  Mohammad Jashim Uddin
 **/
#include <iostream>
#include <deque>
#include <unordered_set>
#include <vector>
using namespace std;

typedef long long ll;

#define Y cout << "YES" << endl;
#define yy cout << "Yes" << endl;
#define N cout << "NO" << endl;
#define nn cout << "No" << endl;
#define one cout << "1" << endl;
#define onee cout << "-1" << endl;

vector<vector<ll>> ans;

void Sub_set(deque<ll> &nums, ll idx, vector<ll> v1, ll n)
{
    ans.push_back(v1);
    for (int j = idx; j < n; j++)
    {
        if (j > idx && nums[j] == nums[j - 1])
        {
            continue;
        }
        v1.push_back(nums[j]);
        Sub_set(nums, j + 1, v1, n);
        v1.pop_back();
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ans.clear(); 
        ll n;
        cin >> n;
        deque<ll> dq;
        unordered_set<ll> st;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (st.find(x) == st.end())
            {
                st.insert(x);
                dq.push_back(x);
            }
        }
        // for (auto x : dq)
        // {
        //     cout << x << " ";
        // }
        // cout << endl;

        vector<ll> v1;
        Sub_set(dq, 0, v1, dq.size());

        // for (auto &x : ans)
        // {
        //     for (auto &e : x)
        //     {
        //         cout << e << " ";
        //     }
        //     cout << endl;
        // }
        ll mx = 0;
        for(auto &x:ans)
        {
            mx = max(mx,(ll)x.size());
        }
        vector<vector<ll>>path;
        for(auto &x:ans)
        {
            if(mx==x.size())
            {
                path.push_back(x);
            }
        }
        for(auto &x:ans)
        {
            for(auto &e:x)
            {
                cout<<e<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
