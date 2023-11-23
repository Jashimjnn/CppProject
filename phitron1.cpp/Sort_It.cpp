#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
class Student
{
  public:
   string name;
   int cls;
   char ch;
   int  id;
   int  math;
   int  Eng;
   int TotalMarks;
};
bool cmp(Student a,Student b)
{
    if(a.TotalMarks>b.TotalMarks)
    {
        return true;
    }
    else if(a.TotalMarks<b.TotalMarks)
    {
        return false;
    }
    else
    {
        return a.id<b.id;
    }
}
int main()
{
    int n;
    cin>>n;
    Student *ar = new  Student[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i].name>>ar[i].cls>>ar[i].ch>>ar[i].id>>ar[i].math>>ar[i].Eng;
        ar[i].TotalMarks=ar[i].math+ar[i].Eng;
    }
    sort(ar,ar+n,cmp);
    for(int  i=0;i<n;i++)
    {
        cout<<ar[i].name<<" "<<ar[i].cls<<" "<<ar[i].ch<<" "<<ar[i].id<<" "<<ar[i].math<<" "<<ar[i].Eng<<endl;
    }
    return 0;
}