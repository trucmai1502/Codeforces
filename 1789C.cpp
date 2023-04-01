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
ll n,m,a[MN1]; 
void solve(){
  cin>>n>>m;
  map<ll,ll> mp;
  ll res = 0;
  for(ll i = 0;i < n;++i){
    cin>>a[i];
    mp[a[i]] = m + 1;  
  }
  for(ll i = 1;i <= m;++i){
    ll pos,val; cin>>pos>>val;
    mp[a[pos - 1]] -= (m - i + 1);
    a[pos - 1] = val;
    mp[a[pos - 1]] += (m - i + 1);
  }
  for(auto [num,cnt] : mp){
    res += cnt*(cnt - 1) >> 1; 
    res += (m + 1 - cnt)*cnt;
  }
  cout<<res<<endl;
}

signed main(){
  cin.tie(0) -> sync_with_stdio(0);
  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);
  ll t = 1; cin>>t;
  while(t--) solve();
}

