#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int cnt=0;
        for(int i=0;i<str.size()-1;i++)
        {
            for(int j=i+1;j<str.size();j++)
            {
                if(str[i]>str[j])
                {
                 swap(str[i],str[j]);
                 cnt++;
                }
            }
        }
        if(cnt==2)
        {
            N;
        }
        else
        {
            Y;
        }
    }
    return 0;
}