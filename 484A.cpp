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
ll l,r; 
void solve(){
  if(l > r) swap(l,r); 
  for(ll i = 0;i < 63;++i)
    if((l | (1LL<<i)) <= r) l |= (1LL<<i);
  cout<<l<<endl;
}

int main(){
  cin.tie(0) -> sync_with_stdio(0);
  //freopen("i.inp", "r", stdin);
  //freopen("o.out", "w", stdout);
  ll t = 1; cin>>t;
  while(t--){
    cin>>l>>r;
    solve();
  }
  return 0;
}

