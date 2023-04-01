#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(a) (a).begin(), (a).end()
#define vi vector<ll>
#define pi pair<ll,ll>
#define pii pair<ll,pair<ll,ll>>
#define fi first
#define se second
#define gcd __gcd
#define mset(a,v) memset(a, v, sizeof(a))
#define endl '\n'
#define spc " "

const int MN1 = 1e6 + 5,MN2 = 1e4 + 5,LOG = 27;
const ll MOD = 1e9 + 7,INF = 1e9;
string s; ll n;
void solve(){
  cin>>n>>s;
  ll d3 = 0,d5 = 0; 
  for(auto c : s){
    if(c == 'F') d3 += 3; 
    else d5 += 5;
    cout<<d3<<spc<<d5<<endl;
  }
}

signed main(){
  cin.tie(0) -> sync_with_stdio(0);
  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);
  ll t = 1; cin>>t;
  while(t--) solve();
}

