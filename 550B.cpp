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
ll n,l,r,x,a[MN1];
void solve(){
  ll lim = 1<<n,ans = 0;
  for(ll i = 0;i < lim;++i){
    ll mi = INF,mx = 0,sum = 0;
    for(ll j = 0;j < n;++j){    
      if(i & (1<<j)){
        mi = min(mi,a[j]);
        mx = max(mx,a[j]);
        sum += a[j];
      }
    }
    if(sum >= l && sum <= r && mx - mi >= x) ++ans;
  }
  cout<<ans;
}

int main(){
  cin.tie(0) -> sync_with_stdio(0);
  //freopen("i.inp", "r", stdin);
  //freopen("o.out", "w", stdout);
  ll t = 1; //cin>>t;
  while(t--){
    cin>>n>>l>>r>>x;
    for(ll i = 0;i < n;++i) cin>>a[i];
    solve();
  }
  return 0;
}

