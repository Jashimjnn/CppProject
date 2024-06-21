#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
    vector<string> days = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
    string a, b;
    cin >> a >> b;
    int ind1, ind2;
    for (int i = 0; i < 7; i++)
    {
        if (days[i] == a)
        {
            ind1 = i;
        }
        if (days[i] == b)
        {
            ind2 = i;
        }
    }
    if ((ind1 + 28) % 7 == ind2 || (ind1 + 30) % 7 == ind2 || (ind1 + 31) % 7 == ind2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
