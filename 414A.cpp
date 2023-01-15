#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<ll,ll>
#define fi first 
#define se second 
#define all(a) (a).begin(), (a).end()
#define gcd __gcd
#define mset(a,v) memset(a, v, sizeof(a))
#define spc " "
#define endl '\n' 
const int MN1 = 1e6 + 5, MN2 = 1e4 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 0x3f3f3f3f3f;
ll n,k;
void solve(){
  ll x = k - (n-2)/2;
  cout<<x<<spc<<2*x<<spc;
  for(ll i = 2*x + 1;i <= 2*x + n - 2;++i) cout<<i<<spc; 
}

int main(){
  cin.tie(0) -> sync_with_stdio(0);
  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);
  ll t = 1; //cin>>t;
  while(t--){
    cin>>n>>k;
    if(n == 1 && k == 0) cout<<1;
    else if(n == 1 || k < n/2) cout<<-1;
    else solve();
  }
  return 0;
}

