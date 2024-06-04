#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> v1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            v1[i]=v[i];
        }
        int idx1, idx2;
        int mx = INT_MIN;
        sort(v1.begin(),v1.end());
        int mx1 = v1[n-2];
        for (int i = 0; i < n; i++)
        {
            if (mx < v[i])
            {
                idx1 = i;
                mx = v[i];
            }
            if(mx1==v[i])
            {
                idx2=i;
            }
        }
        if(idx1>idx2)
        {
            swap(idx1,idx2);
        }
        cout<<idx1<<" "<<idx2<<endl;
    }
    return 0;
}