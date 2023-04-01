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
ll n,ans; bool dp[20][10][10][2][2][2];
string l,r,res,rres; 
void f(ll i,ll ma,ll mi,bool fl,bool fr,bool sus){
   if(i >= r.size()){
    if(ans > ma - mi)
       ans = ma - mi,rres = res;
   return; 
  }
  bool &check = dp[i][ma][mi][fl][fr][sus]; 
  if(check) return; 
  check = true;
  for(ll d = 0;d <= 9;++d){
    if((!fl) && d < (l[i] - '0')) continue;
    if((!fr) && d > (r[i] - '0')) continue;
    res += char(d + '0');
    ll nma = ma,nmi = mi;
    if(sus || d > 0) nma = max(ma,d),nmi = min(mi,d);
    bool nfl = (fl | (d > (l[i] - '0'))),
         nfr = (fr | (d < (r[i] - '0')));
    f(i+1,nma,nmi,nfl,nfr,sus | (d > 0));
    res.pop_back();  
  }
}

void solve(){
  cin>>l>>r; 
  while(l.size() < r.size()) l = '0' + l;
  ans = 10; 
  mset(dp,0);
  f(0,0,9,0,0,0);
  while(rres[0] == '0') rres.erase(0,1);
  cout<<rres<<endl;
}

signed main(){
  cin.tie(0) -> sync_with_stdio(0);
  freopen("i.inp","r",stdin);
  freopen("o.out","w",stdout);
  ll t = 1; cin>>t;
  while(t--) solve();
}
