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

ll n,a[MN1],mi[MN1],ma[MN1],ans = 0;

void build(ll i,ll l,ll r){
  if(l == r){
    mi[i] = a[l];
    ma[i] = a[l];
    return;
  }
  ll m = (r+l) >> 1; 
  build(2*i,l,m); build(2*i+1,m+1,r);
  ma[i] = max(ma[2*i],ma[2*i+1]);
  mi[i] = min(mi[2*i],mi[2*i+1]);
}


void solve(){
  cin>>n; 
  for(ll i = 1;i <= n;++i) cin>>a[i];
  build(1,1,n);
}

signed main(){
  cin.tie(0) -> sync_with_stdio(0);
  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);
  ll t = 1; //cin>>t;
  while(t--) solve();
}
