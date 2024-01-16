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
        int cnt1=0,cnt2=0,cnt3=0;
        for(int i=0;i<str.size();i++)
        {
            if(isdigit(str[i]))
            {
                cnt1++;
            }
            else if(islower(str[i]))
            {
                cnt2++;
            }
            else
            {
                cnt3++;
            }
        }
        cout<<cnt3<<" "<<cnt2<<" "<<cnt1<<endl;
    }
    return 0;
}