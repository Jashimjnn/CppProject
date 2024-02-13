#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
// class Edge
// {
// public:
//     int u, v, w;
//     Edge(int u, int v, int w)
//     {
//         this->u = u;
//         this->v = v;
//         this->w = w;
//     }
//};
int main()
{
    // int n, e;
    // cin >> n >> e;
    // vector<Edge> E_List;
    // while (e--)
    // {
    //     int a,b,w;
    //     cin>>a>>b>>w;
    //     E_List.push_back(Edge(a,b,w));
    // }
    int n,e;
    cin>>n>>e;
    int mat[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            mat[i][j]=-1;
            if(i==j)
            {
                mat[i][j]=0;
            }
        }
    }
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        mat[a][b]=c;
        mat[b][a]=c;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}