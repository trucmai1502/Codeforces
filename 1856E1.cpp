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

const int MN = 1e4 + 5,LOG = 27;
const ll MOD = 1e9 + 7,INF = 1e9;
ll n,p[MN],sz[MN],dp[MN],res;
vector<ll>g[MN]; bitset<MN/2>bs;
void dfs(ll u,ll p){
  sz[u] = 1; 
  for(ll &v : g[u]){
    if(v == p) continue; 
    dfs(v,u); 
    sz[u] += sz[v];
  }
  if(g[u].size() > 1){
    bs = 1;
    for(ll &v : g[u]) if(v != p) bs = (bs<<sz[v]) | bs;
    for(ll i = (sz[u] - 1)/2;i >= 0;--i)
      if(bs[i]){res += i*(sz[u] - i - 1); break;}
  } 
}
void solve(){
  cin>>n;
  for(ll i = 2;i <= n;++i){
    cin>>p[i]; 
    g[i].emplace_back(p[i]);
    g[p[i]].emplace_back(i);
  }
  dfs(1,1);
  cout<<res<<endl;
}
signed main(){
  cin.tie(0) -> sync_with_stdio(0);
  open();
  ll t = 1; //cin>>t;
  while(t--) solve(); 
  
  #ifdef LOCAL
    cerr << endl << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  #endif
}

