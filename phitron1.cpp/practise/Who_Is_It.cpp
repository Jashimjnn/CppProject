#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
class Student
{
public:
  int ID;
  char name[100];
  char section;
  int total_marks;
};
int main()
{
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++)
  {
    Student st[3];
    for (int i = 1; i <= 3; i++)
    {
      char tem[100];
      cin >> st[i].ID >> tem >> st[i].section >> st[i].total_marks;
      strcpy(st[i].name, tem);
    }

    int mx = 0;
    int idx = 1;
    for (int i = 1; i <= 3; i++)
    {
      if (st[i].total_marks > mx || (st[i].total_marks == mx && st[i].ID < st[idx].ID))
      {
        mx = st[i].total_marks;
        idx = i;
      }
    }
    cout << st[idx].ID << " " << st[idx].name << " " << st[idx].section << " " << st[idx].total_marks << endl;
  }
  return 0;
}