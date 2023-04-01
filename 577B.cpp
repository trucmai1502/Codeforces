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

const int MN1 = 1e5,MN2 = 1e3,LOG = 27;
const ll MOD = 1e9 + 7,INF = 1e18;
ll n,m,dp[MN1][MN2],a[MN1];
//dp[i+1][(j + a[i]) % m] |= dp[i][j]

void solve(){
  cin>>n;
  for(ll i = 1;i <= n;++i) cin>>a[i];
  dp[0][0] = true;  
  for(ll i = 1;i <= n;++i){
    for(ll j = 0;j < m;++j){
      if((j+a[i] + m) % m == 0) dp[i+1][(j+a[i] + m) % m] = true;
      else dp[i+1][(j + a[i] + m) % m] |= dp[i][j]; 
    }
  }
  cout<<dp[n][0];
}

signed main(){
  cin.tie(0) -> sync_with_stdio(0);
  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);
  ll t = 1; //cin>>t;
  while(t--) solve();
}

