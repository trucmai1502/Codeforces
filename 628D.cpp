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
ll m,d,dp[2005][2005][2][2];
string l,r; 

ll f(ll i,ll mod,bool fl,bool fr){
  if(i == r.size()) return (mod == 0); 
  ll &res = dp[i][mod][fl][fr];
  if(res != -1) return res; 
  res = 0; 
  if(!(i&1)){
    for(ll digit = 0;digit <= 9;++digit){
      if(digit == d) continue;
      if(!fl && (digit < l[i] - '0')) continue; 
      if(!fr && (digit > r[i] - '0')) continue; 
      bool nfl = (fl | (digit > l[i] - '0')),
           nfr = (fr | (digit < r[i] - '0'));
      res += f(i + 1,(mod*10 + digit) % m,nfl,nfr);
      res %= MOD;
    }
  }else{
    if(!fl && (d < l[i] - '0')) return 0;
    if(!fr && (d > r[i] - '0')) return 0;
    bool nfl = (fl | (d > l[i] - '0')),
         nfr = (fr | (d < r[i] - '0'));
    res += f(i + 1,(mod*10 + d) % m,nfl,nfr);
    res %= MOD;
  }
  return res;
}

void solve(){
  cin>>m>>d>>l>>r;
  while(l.size() < r.size()) l = '0' + l;
  mset(dp,-1);
  cout<<f(0,0,false,false);
}

signed main(){
  cin.tie(0) -> sync_with_stdio(0);
  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);
  ll t = 1; //cin>>t;
  while(t--) solve();
}
