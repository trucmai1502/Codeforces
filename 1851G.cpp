//i_love_aisukiuwu
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

const int MN1 = 1e6 + 5,MN2 = 1e4 + 5,LOG = 27;
const ll MOD = 1e9 + 7,INF = 1e9;

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
};
struct query{ 
  ll idx,u,v,w; 
  query(){}
  query(ll idx,ll u,ll v,ll w):idx(idx),u(u),v(v),w(w){}
  bool operator < (const query &other) const{
    return w < other.w;
  }
};
ll n,m,q,h[MN1],idx[MN1]; bool res[MN1];
vector<pi>edges; vector<query>Q;
void solve(){
  cin>>n>>m;
  Q.clear(); edges.clear();
  for(ll i = 1;i <= n;++i) cin>>h[i]; 
  for(ll i = 1;i <= m;++i){
    ll u,v; cin>>u>>v; 
    edges.emplace_back(u,v);
  }
  sort(all(edges),[&](pi &x,pi &y){
    ll mx = max(h[x.fi],h[x.se]),my = max(h[y.fi],h[y.se]); 
    return mx < my;
  });
  // debug(edges);
  cin>>q;
  for(ll i = 1;i <= q;++i){
    ll u,v,w; cin>>u>>v>>w;
    Q.emplace_back(i,u,v,w + h[u]);
  }
  dsu check(n);
  sort(all(Q));
  ll ptr = 0; 
  for(auto &q : Q){
    //debug(q.idx,q.u,q.v,q.w);
    //debug(ptr,edges[ptr].fi,edges[ptr].se,max(h[edges[ptr].fi],h[edges[ptr].se]));
    while(ptr < m && max(h[edges[ptr].fi],h[edges[ptr].se]) <= q.w){
      check.unite(edges[ptr].fi,edges[ptr].se);
      //debug(edges[ptr].fi,edges[ptr].se,q.w);
      ++ptr;
    } 
    res[q.idx] = check.same(q.u,q.v);
  }
  for(ll i = 1;i <= q;++i) cout<<(res[i] ? "YES" : "NO")<<endl;
  cout<<endl;
}

signed main(){
  cin.tie(0) -> sync_with_stdio(0);
  open();
  ll t = 1; cin>>t;
  while(t--) solve(); 
  
  #ifdef LOCAL
    cerr << endl << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  #endif
}

