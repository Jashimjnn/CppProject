#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
const int N_MAX = 10;
const int M_MAX = 10;
int maxSumPath(vector<vector<int>> &A, int n, int m, int i, int j)
{

    if (i == n - 1 && j == m - 1)
    {
        return A[i][j];
    }

    int downSum = INT_MIN;
    int rightSum = INT_MIN;
    if (i + 1 < n)
    {
        downSum = maxSumPath(A, n, m, i + 1, j);
    }
    if (j + 1 < m)
    {
        rightSum = maxSumPath(A, n, m, i, j + 1);
    }

    return A[i][j] + max(downSum, rightSum);
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> A(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> A[i][j];
        }
    }

    int maxSum = maxSumPath(A, n, m, 0, 0);
    cout << maxSum << endl;

    return 0;
}
