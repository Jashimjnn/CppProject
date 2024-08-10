/**
 *    author:  Mohammad Jashim Uddin
**/
#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define yy cout << "Yes" << endl;
#define N cout << "NO" << endl;
#define nn cout << "No" << endl;
#define one cout << "1" << endl;
#define onee cout << "-1" << endl;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

vector<int>adj[1005];
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }
    vector<int>indegree(n,0);
    for(int i=0;i<n;i++)
    {
        for(auto &x:adj[i])
        {
            indegree[x]++;
        }
    }

    queue<int>q;
    for(int i=0;i<n;i++)
    {
        if(indegree[i]==0)
        {
            q.push(i);
        }
    }
    vector<int>v;
    while(!q.empty())
    {
        int x = q.front();
        v.push_back(x);
        q.pop();

        for(auto &u:adj[x])
        {
            indegree[u]--;
            if(indegree[u]==0)
            {
                q.push(u);
            }
        }
    }
    for(auto e:v)
    {
        cout<<e<<endl;
    }
    return 0;
}