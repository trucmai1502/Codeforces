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
ll n,a[MN1],l,r;
vector<ll>par;

ll find(ll x){
  return (par[x] < 0 ? x : par[x] = find(par[x]);
}

bool same(ll a,ll b){
  return find(a) == find(b); 
}

void unite(ll a,ll b){
  a = find(a),b = find(b); 
  if(a == b) return; 
  if(a < b) swap(a,b); 
  par[a] += par[b],par[b] = par[a];
}

ll sz(ll a){
  return abs(par[a]);
}

bool check(ll x){
  par = vector<ll>(n+1,-1); 
  ll tmp = -1;bool flag = false;
  for(ll i = 2;i <= n;++i){
    if(a[i] < x && a[i-1] < x) unite(i,i-1); 
    else{
      ll sz_t = sz(i-1);
      if(flag) tmp = sz_t; 
      else if(sz_t != tmp) return false;
    }
  }
}

void solve(){
  cin>>n; 
  for(ll i = 1;i <= n;++i) cin>>a[i],r = max(r,a[i]); 
  while(l + 1 < r){
    ll m = (r+l) >> 1; 
    if(check(m)) l = m;
    else r = m;
  }
}

signed main(){
  cin.tie(0) -> sync_with_stdio(0);
  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);
  ll t = 1; //cin>>t;
  while(t--) solve();
  cerr << endl << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
}

