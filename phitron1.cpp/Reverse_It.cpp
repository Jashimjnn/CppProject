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
   int id;
};
int main()
{
    int n;
    cin>>n;
    Student *ar = new Student[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i].name>>ar[i].cls>>ar[i].ch>>ar[i].id;
    }
    int j=n-1;
    for(int i=0;i<n;i++)
    {
        cout<<ar[i].name<<" "<<ar[i].cls<<" "<<ar[j].ch<<" "<<ar[i].id<<endl;
        j--;
    }
    return 0;
}