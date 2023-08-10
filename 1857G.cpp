#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
  #include "/home/trucmai/.vim/tools.h"
  #define debug(x...) cerr << "\e[91m"<<__func__<<":"<<__LINE__<<" [" << #x << "] = ["; _print(x); cerr << "\e[39m" << endl;
  #else
  #define debug(x...)
#endif

void open(){
  if(fopen("i.inp","r")){
    freopen("i.inp","r",stdin);
    freopen("o.out","w",stdout);
  }
}

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

const int MN = 1e6 + 5,LOG = 27;
const ll MOD = 998244353,INF = 1e9;
struct dsu{
  vector<ll> e;
  dsu(ll n){ e = vector<ll>(n + 1,-1); } 
  ll get(ll x) {return e[x] < 0 ? x : e[x] = get(e[x]); }
  bool same(ll a,ll b) {return (get(a) == get(b));}
  bool unite(ll a,ll b){
    a = get(a),b = get(b);
    if(a == b) return false; 
    if(a > b) swap(a,b);
    e[a] += e[b]; e[b] = a; return true;
  }
  ll sz(ll x){return abs(e[get(x)]);}
};
ll n,s; 
vector<pii>edges;
ll bp(ll n,ll k){
  ll res = 1;
  while(k > 0){
    if(k&1) res = (res*n)%MOD; 
    n = (n*n)%MOD;
    k >>= 1;
  }
  return res;
}
void solve(){
  cin>>n>>s; 
  edges.clear();
  for(ll i = 1;i < n;++i){
    ll u,v,w;cin>>u>>v>>w; 
    edges.push_back({w,{u,v}});
  }
  sort(all(edges),[&](pii a,pii b){return a.fi < b.fi;}); 
  dsu disjoint(n);
  ll res = 1;
  for(auto [w,edge] : edges){
    ll su = disjoint.sz(edge.fi),sv = disjoint.sz(edge.se); 
    res = res*bp(s - w + 1,su*sv - 1)%MOD; 
    disjoint.unite(edge.fi,edge.se);
  } 
  cout<<res<<endl;
}

signed main(){
  cin.tie(0) -> sync_with_stdio(0);
  ll t = 1; cin>>t;
  while(t--) solve(); 
  
  #ifdef LOCAL
    cerr << endl << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  #endif
}