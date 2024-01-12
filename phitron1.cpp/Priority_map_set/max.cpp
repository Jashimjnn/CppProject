#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int x = *max_element(v.begin(),v.end());
    int y = *min_element(v.begin(),v.end());
    int sum=accumulate(v.begin(),v.end(),0);
    cout<<sum<<" "<<x<<" "<<y;
    return 0;
}