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
    int mat[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }
    vector<pair<int,int>>edlist;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]==1 && i!=j)
            {
                edlist.push_back({j,mat[i][j]});
            }
        }
    }
    return 0;
}