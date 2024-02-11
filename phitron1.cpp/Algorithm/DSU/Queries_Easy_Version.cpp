#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;

int main()
{
    int q;
    cin >> q;
    vector<int> v;

    while (q--)
    {
        int x;
        cin >> x;

        if (x == 1)
        {
            int y;
            cin >> y;
            v.push_back(y);
        }
        else if (x == 2)
        {
            if (!v.empty())
            {
                int min_even = INT_MAX;
                int min_even_index = -1;
                for (int i = 0; i < v.size(); ++i)
                {
                    if (v[i] % 2 == 0 && v[i] < min_even)
                    {
                        min_even = v[i];
                        min_even_index = i;
                    }
                }
                if (min_even_index != -1)
                {
                    cout << min_even << endl;
                    v.erase(v.begin() + min_even_index);
                }
                else
                {
                    cout << "empty" << endl;
                }
            }
            else
            {
                cout << "empty" << endl;
            }
        }
        else if (x == 3)
        {
            if (!v.empty())
            {
                int min_odd = INT_MAX;
                int min_odd_index = -1;
                for (int i = 0; i < v.size(); ++i)
                {
                    if (v[i] % 2 != 0 && v[i] < min_odd)
                    {
                        min_odd = v[i];
                        min_odd_index = i;
                    }
                }
                if (min_odd_index != -1)
                {
                    cout << min_odd << endl;
                    v.erase(v.begin() + min_odd_index);
                }
                else
                {
                    cout << "empty" << endl;
                }
            }
            else
            {
                cout << "empty" << endl;
            }
        }
    }
    return 0;
}
