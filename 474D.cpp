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
const int MN1 = 1e5 + 5, MN2 = 1e4 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 0x3f3f3f3f3f;
ll k,a,b,f[MN1 + 1],sum[MN1 + 1];
void calc(){
  f[0] = 1;
  for(ll i = 1;i <= MN1;++i){
    if(i < k) f[i] = f[i-1];
    else f[i] = (f[i-1] + f[i-k] + MOD) % MOD;  
  }
  sum[0] = f[0];
  for(ll i = 1;i <= MN1;++i) 
    sum[i] = (sum[i-1] + f[i] + MOD) % MOD;
}

void solve(){
  cout<<(sum[b] - sum[a-1] + MOD) % MOD<<endl;
}

int main(){
  cin.tie(0) -> sync_with_stdio(0);
  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);
  ll t = 1; cin>>t; 
  cin>>k; calc();
  while(t--){
    cin>>a>>b;
    solve();
  }
  return 0;
}

