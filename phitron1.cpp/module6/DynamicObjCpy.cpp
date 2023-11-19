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
     Person(string name,int age)
     {
        this->name=name;
        this->age=age;
     }

};
int main()
{
   Person* rakib = new Person("Rakib Hasan", 25);
   Person* sakib = new Person("Sakib Hasan",23);
//    rakib->name=sakib->name;
//    rakib->age=sakib->age;
   *rakib=*sakib;
   cout<<rakib->name<<" "<<rakib->age<<endl;
   return 0;
}