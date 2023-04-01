#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
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

ll l,r;

void solve(){
  cin>>l>>r;
  ll mx = 1 + log2(r/l);
  cout<<mx<<spc;
  if(mx == 1){ 
    cout<<r - l + 1<<endl;
    return; 
  }
  ll po = (1<<(mx - 1)),
     mm = r/po,
     res = mm - l + 1; 
  po >>= 1,po *= 3; 
  if(l*po > r){
    cout<<res<<endl; 
    return;
  }
  res += ((r/po) - l + 1)*(mx - 1);
  cout<<res<<endl;
}

signed main(){
  cin.tie(0) -> sync_with_stdio(0);
  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);
  ll t = 1; cin>>t;
  while(t--) solve();
}

