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
    string str;
    cin>>str;
    //set<char>se;
    int cnt=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==str[i+1])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    //cout<<(str.size()-se.size())<<endl;
    return 0;
}