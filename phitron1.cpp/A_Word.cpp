#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
int main()
{
    string str;
    cin>>str;
    int cntu=0,cntl=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            cntu++;
        }
        else
        {
            cntl++;
        }
    }
    if(cntu==cntl)
    {
        transform(str.begin(),str.end(),str.begin(),::tolower);
    }
    else if(cntu>cntl)
    {
        transform(str.begin(),str.end(),str.begin(),::toupper);
    }
    else
    {
        transform(str.begin(),str.end(),str.begin(),::tolower);
    }
    cout<<str<<endl;
    return 0;
}