#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(a) (a).begin(), (a).end()
#define pi pair<ll,ll>
#define fi first
#define se second
#define gcd __gcd
#define mset(a,v) memset(a, v, sizeof(a))
#define endl '\n'
#define spc " "

const int MN1 = 1e6 + 5,MN2 = 1e4 + 5,LOG = 27;
const ll MOD = 1e9 + 7,INF = 1e18;
ll n,a[MN1],sum;
string solve(){
  cin>>n;
  for(ll i = 0;i < n;++i) cin>>a[i];
  sort(a,a+n);  
  sum = 1;
  if(a[0] != 1) return "NO";
  for(ll i = 1;i < n;++i){
    //cout<<a[i]<<"-"<<sum<<spc;
    if(a[i] > sum) return "NO";
    sum += a[i];
  }
  //cout<<endl;
  return "YES";
}

signed main(){
  cin.tie(0) -> sync_with_stdio(0);
  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);
  ll t = 1; cin>>t;
  while(t--) cout<<solve()<<endl;
}

