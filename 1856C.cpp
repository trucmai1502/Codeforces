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
const ll MOD = 1e9 + 7,INF = 1e9;
ll n,k,a[MN];
void solve(){
  cin>>n>>k;
  for(ll i = 1;i <= n;++i) cin>>a[i]; 
  auto check=[&](ll x,ll pos)->bool{
    ll cnt = 0;
    for(ll i = pos;i <= n;++i){
      if(i == n && a[n] < x - (n - pos)) return false; 
      if(a[i] >= x - (i - pos)) break; 
      cnt += (x - (i-pos) - a[i]);
    }
    return (cnt <= k);
  };
  ll res = 0;
  for(ll i = 1;i <= n;++i){
    ll l = a[i],r = INF;
    while(l <= r){
      ll m = (r+l) >> 1; 
      if(check(m,i)) l = m + 1; 
      else r = m - 1; 
    } 
    res = max(res,l-1);
  }
  cout<<max(res,a[n])<<endl;
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