#include<bits/stdc++.h>

using namespace std;


int main()
{
     string s;
    cin>>s;
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    for(int i=0; i<n; i++)
    {
        int ans=0;
        for(int j=v[i].first; j<v[i].second; j++)
        {
            if(s[j-1]==s[j])
            ans++;
        }
        cout << ans <<  endl;
    }
}