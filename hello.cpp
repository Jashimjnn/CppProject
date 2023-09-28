#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
void fast()
{
    cin.tie(0);
    cout.sync_with_stdio(0);
}
int main()
{
    // count divisors;
    // int n;
    // cin>>n;
    // int count=0;
    /*for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    cout<<count<<endl;*/
    // int count=2;
    /* for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    cout<<count<<endl;*/
    // int  count=2;
    /*for(int i=2;i<=sqrt(n);i++)
     {
         if(n%i==0)
         {
             count++;
         }
     }
     cout<<count<<endl;*/
    /*int n;
    cin>>n;
    int count=2;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"prime"<<endl;
    }
    else
    {
        cout<<"Not prime"<<endl;
    }*/
   //  digit print 
   /*int n;
   cin>>n;
   string str  = to_string(n);
   int len = str.size();
   for(int i=0;i<len;i++)
   {
      int x = (int)(n/pow(10,i))%10;
      cout<<x<<" ";
   }*/
   //GCD  the euclidean  algorithm;
   int a,b;
   cin>>a>>b;
   int x = __gcd(b,a%b);
   int  y  = (a*b)/x;
   cout<<x<<" "<<y<<endl;
    return 0;
}
/*
// Libary 
#include<bits/stdc++.h>
using namespace std;

// Type definition
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef vector<string> vstr;
typedef vector<pll> vpl;
typedef set<ll> sll;

// Loop 
#define loop(i,Start,End,Inc) for(ll i=Start;i<=End;i+=Inc)
#define loopR(i,Start,End,Dec) for(ll i=Start;i>=End;i-=Dec)

// Printing statement
#define dp_x(x) cout<<x<<endl
#define dp_xy(x,y) cout<<x<<" "<<y<<endl
#define nl cout<<"\n"
#define printArray(v) for(auto k:v)cout<<k<<" "

// STL operation 
#define pb push_back
#define in insert
#define all(v) v.begin(),v.end()
#define asc(v) sort(all(v))
#define dsc(v) asc(v),reverse(all(v))
#define Faster ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);

// Precalculation
ll lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
*/