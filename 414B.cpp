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
const int MN1 = 1e6 + 5, MN2 = 2e3 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 0x3f3f3f3f3f;
ll n,k,dp[MN2][MN2],ans; 

//dp[i][j] is the number of good sequences with length i and end at j 
//dp[i][j] += dp[i-1][j'] with j divisble by j'

void solve(){
  for(ll j = 1;j <= n;++j) dp[1][j] = 1;
  
  for(ll i = 2;i <= k;++i)
    for(ll j = 1;j <= n;++j)
      for(ll x = 1;x <= n/j;++x)
        dp[i][j] = (dp[i][j] + dp[i-1][j*x]) % MOD;
  for(ll j = 1;j <= n;++j) 
    ans = (ans + dp[k][j]) % MOD;
  cout<<ans; 
}

int main(){
  cin.tie(0) -> sync_with_stdio(0);
  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);
  ll t = 1; //cin>>t;
  while(t--){
    cin>>n>>k;
    solve();
  }
  return 0;
}

