#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define y cout<<"YES"<<endl;
#define n cout<<"NO"<<endl;
class Person
{
    public:
      string name;
      int age;
      int marks1;
      int marks2;
      Person(string nm,int ag,int m1,int m2)
      {
        name=nm;
        age=ag;
        marks1=m1;
        marks2=m2;
      }
      void hello()
      {
        cout<<name<< " "<<age<<endl;
      }
      int totalMarks()
      {
        return marks1+marks2;
      }
};
int main()
{
   Person rakib("Jashim",23,95,90);
   rakib.hello();
   cout<<rakib.totalMarks()<<endl;
   return 0;
}