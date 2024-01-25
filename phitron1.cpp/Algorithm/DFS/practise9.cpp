#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int n, m;
char a[20][20];
char color, newColor;

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    if(i >= 0 && i < n && j >= 0 && j < m)
    {
        return true;
    }

    return false;
}

void floodFill(int si, int sj)
{
    char originalColor = a[si][sj];
    a[si][sj] = newColor;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj) && a[ci][cj] == originalColor)
        {
            floodFill(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int sr, sc;
    cin >> sr >> sc;
    cin >> newColor;

    if (a[sr][sc] != newColor)
    {
        floodFill(sr, sc);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
