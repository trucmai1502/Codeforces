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
struct cmp{
	bool operator () (const pi &a, const pi &b) const{
    if(a.fi != b.fi) return a.fi > b.fi;
    else return a.se < b.se;
  }
};

ll n,q,a[MN1],s[MN1],query[MN1],par[MN1];
vector<ll> adj[MN1]; multiset<pi,cmp> w[MN1];
bool vis[MN1];

void dfs(ll u){
  vis[u] = true;
  for(auto v : adj[u]){
    if(!vis[v]){
      par[v] = u; 
      dfs(v); 
      w[u].insert({s[v],v}); 
      s[u] += s[v],query[u] += query[v];
    }
  }
  s[u]++,query[u] += a[u];
}

void solve(){
  cin>>n>>q;
  for(ll i = 1;i <= n;++i) cin>>a[i]; 
  for(ll i = 0;i < n - 1;++i){
    ll u,v; cin>>u>>v; 
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  dfs(1);
  while(q--){ 
    ll u,type; cin>>type>>u;
    if(type == 1) cout<<query[u]<<endl; 
    else{
      if(!w[u].empty()){ 
        auto tmp = w[u].begin();
        pi cur = *tmp; 
        ll parent = par[u],v = cur.se,sz = cur.fi; 
      
        //delete the heavy son
        w[u].erase(w[u].begin()); 
        w[parent].erase(w[par[u]].find({s[u],u}));

        //change query 
        s[u] -= s[v],s[v] += s[u];
        query[u] -= query[v],query[v] += query[u];
        
        //add new edge
        w[v].insert({s[u],u});
        w[parent].insert({s[v],v});

        par[u] = v; 
        par[v] = parent;
      }
    }
  }
}

signed main(){
  cin.tie(0) -> sync_with_stdio(0);
  freopen("i.inp","r",stdin);
  freopen("o.out","w",stdout);
  ll t = 1; //cin>>t;
  while(t--) solve();
  cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
}
