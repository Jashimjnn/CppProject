#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    // What will be the output of the v[3] of the following code snippet?
    int a[4] = {12, 13, 14, 15};
    vector<int> v={1,2,3,4,5};
v.erase(v.begin()+2, v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    //cout<<v[3]<<endl;
    return 0;
}