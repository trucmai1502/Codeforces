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
ll n,c,a[MN1],b[MN1],dp[MN1][2];

//dp[i][j] is the minimum time to go to the i -> i + 1 floor using j(0: stair/1: elevator) 
//dp[i+1][0] = min(dp[i+1][0],dp[i][1] + a[i], dp[i][0] + a[i]) : using the stair 
//dp[i+1][1] = min(dp[i+1][1],dp[i][0] + b[i] + c,dp[i][1] + b[i]) : using the elevator 

void solve(){
  mset(dp,0x3f);
  dp[0][0] = 0,dp[0][1] = c;
  for(ll i = 0;i < n - 1;++i){
    dp[i+1][0] = min(dp[i+1][0],min(dp[i][0] + a[i],dp[i][1] + a[i])); 
    dp[i+1][1] = min(dp[i+1][1],dp[i][0] + b[i] + c); 
    dp[i+1][1] = min(dp[i+1][1],dp[i][1] + b[i]);
  }
  for(ll i = 0;i < n;++i) 
    cout<<min(dp[i][0],dp[i][1])<<spc;
}

int main(){
  cin.tie(0) -> sync_with_stdio(0);
  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);
  ll t = 1; //cin>>t;
  while(t--){ 
    cin>>n>>c; 
    for(ll i = 0;i < n-1;++i)cin>>a[i];
    for(ll i = 0;i < n-1;++i)cin>>b[i];
    solve();
  }
  return 0;
}

