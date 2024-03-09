#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll q;
    cin >> q;
    map<ll, ll> count; // To store count of each element
    set<pair<ll, ll>> maxCount;  // To keep track of maximum occurrences and their elements
    while (q--)
    {
        ll x, y;
        cin >> x;
        if (x == 1)
        {
            cin >> y;
            // Update count of element y
            count[y]++;
            // Update maxCount set
            maxCount.erase({count[y] - 1, y});
            maxCount.insert({count[y], y});
        }
        else if (x == 2)
        {
            if (!maxCount.empty())
            {
                auto it = prev(maxCount.end()); // Get the last element with maximum occurrence
                cout << it->second << "\n";     // Print the value
                // Erase all occurrences of the element from count and maxCount
                count.erase(it->second);
                maxCount.erase(it);
            }
            else
            {
                cout << "empty\n";
            }
        }
    }
    return 0;
}
