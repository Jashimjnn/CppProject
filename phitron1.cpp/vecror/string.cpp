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
    cin.ignore();
    vector<string>v;
    // for(int i=0;i<n;i++)
    // {
    //     string s;
    //     cin>>s;
    //     v.push_back(s);
    // }
    for(int i=0;i<n;i++)
    {
        string s;
        getline(cin,s);
        v.push_back(s);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}