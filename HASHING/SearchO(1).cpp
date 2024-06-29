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

#define MAX 1000

bool hashTable[MAX + 1][2];

bool search(int x)
{
    if (x >= 0)
    {
        if (hashTable[x][0] == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        x = abs(x);
        if (hashTable[x][1] == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
void insert(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            hashTable[a[i]][0] = 1;
        }
        else
        {
            hashTable[abs(a[i])][1] = 1;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int find;
    cin >> find;
    insert(arr, n);
    if (search(find))
    {
        cout << "Element is present" << endl;
    }
    else
    {
        cout << "Element is not present " << endl;
    }
}