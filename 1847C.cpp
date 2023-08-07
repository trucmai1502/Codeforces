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
ll n,a[MN1];

struct trie{
  struct node{
    array<ll,2> child; ll cnt;
    node(){}
    node(array<ll,2> tmp,ll _cnt):child(tmp),cnt(_cnt){}
  };
  ll n = 0,mx = 30;
  vector<node>tr{node({0,0},0)};
  trie(){}
  void add(ll x){ 
    ++n; 
    for(ll i = mx - 1,u = 0;i >= 0;--i){
      if(!tr[u].child[x>>i&1]){
        tr[u].child[x>>i&1] = tr.size(); 
        tr.push_back(node({0,0},0));
      }
      u = tr[u].child[x>>i&1];
      tr[u].cnt++;
    }
  }
  void era(ll x){
    --n; 
    for(ll i = mx - 1,u = 0;i >= 0;--i){
      assert(tr[u].child[x>>i&1]);
      u = tr[u].child[x>>i&1];
      assert(tr[u].cnt);
      tr[u].cnt--;
    }
  }
  ll maxor(ll x){
    ll res = 0;
    for(ll i = mx - 1,u = 0;i >= 0;--i){
      if(!tr[u].child[~x>>i&1] || !tr[tr[u].child[~x>>i&1]].cnt) u = tr[u].child[x>>i&1];
      else res |= 1LL<<i,u = tr[u].child[~x>>i&1];
    }
    return res;
  }
};
void solve(){
  trie btrie;
  cin>>n; ll cur = 0,res= 0; btrie.add(cur);
  for(ll i = 1;i <= n;++i){ 
    cin>>a[i]; cur^= a[i]; 
    res = max(res,btrie.maxor(cur)); 
    btrie.add(cur);
  }
  cout<<res<<endl;
}

signed main(){
  cin.tie(0) -> sync_with_stdio(0);
  //open();
  ll t = 1; cin>>t;
  while(t--) solve(); 
  
  #ifdef LOCAL
    cerr << endl << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  #endif
}

