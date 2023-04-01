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
bool d[MN1];
void sieve(){
  mset(d,true);
  d[0] = d[1] = false;
  for(ll i = 2;i <= 1e6;++i)
    for(ll j = i + i;j <= 1e6;j += i)
      d[j] = false; 
}

void solve(){

}

signed main(){
  cin.tie(0) -> sync_with_stdio(0);
  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);
  sieve();
  ll t = 1; //cin>>t;
  while(t--) solve();
}
