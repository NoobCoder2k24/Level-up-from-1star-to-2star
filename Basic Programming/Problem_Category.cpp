#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 //priority in (),*,/ should be kept in consideration.
 //can also use a+b>2*c , don't need to use double;
 
// can use sum of integers while checking the multiple integers value
// be aware of integer divisions while needing the double value, cast them as doubles,floats
 
//integer reverse
// int n;
// cin>>n;
// bool p{false};
// while(n>9)
// {
//     int k=n%10;
//     n/=10;
//     if(k>0)
//     p=true;
//     if(p)
//     cout<<k;
// }
// cout<<n<<endl;
// int r{};
// while(n>0)
// {
//     int k=n%10;
//     n/=10;
//     r=r*10+k;
// }
// cout<<r<<endl;
//string n,k;
//cin>>n;
//for(int i=(n.size()-1); i>=0; i--)
//k+=n[i];
//cout<<stoi(k)<<endl;:


void solve()
{
    int n;
    cin>>n;
    if(n>=1 && n<100)
    cout<<"Easy"<<endl;
    else if(n>=100 && n<200)
    cout<<"Medium"<<endl;
    else
    cout<<"Hard"<<endl;
}
int main()
  {
  fast_cin();
  ll t;
  cin >> t;
  for(int i=0;i<t;i++)
// cout << "Case #" << it+1 << ": ";
  {
  solve();
  }
  return 0;
}