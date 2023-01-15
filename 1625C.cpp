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
const int MN1 = 1e5 + 5, MN2 = 5e2 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 0x3f3f3f3f3f;
ll n,l,k,d[MN1],a[MN1],dp[MN1][MN2];

//dp[i][j] is the minimum time to go from 1 -> n with j remove
//

ll calc(ll len,ll j){
  ll &res = dp[len][j];
  if(len == l || dp[len][j] != -1) return res;
  for(ll i = 0,i < n;++i){
    res = min(calc(len
  }
}

int main(){
  cin.tie(0) -> sync_with_stdio(0);
  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);
  ll t = 1; //cin>>t;
  while(t--){
    cin>>n>>l>>k;
    for(ll i = 0;i < n;++i) cin>>d[i];
    for(ll i = 0;i < n;++i) cin>>a[i];
    solve();
  }
  return 0;
}

