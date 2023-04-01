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
const ll MOD = 998244353,INF = 1e9;

ll n,m,a[MN1];

/* a[i]  = gcd(b[1] -> b[i]) = gcd(gcd(b[1] -> b[i-1]),b[i])
        = gcd(a[i-1],b[i]) (*)
  
  note that: 
    gcd(a,b) = d -> gcd(a/d,b/d) = 1
    so:

  (*) -> gcd(a[i-1]/a[i],b[i]/a[i]) = 1 
  +) [1,a[i-1]/a[i]] = phi(a[i-1]/a[i]) ways 
  +) (a[i-1]/a[i],m] = (
*/

ll phi(ll n) {
  ll result = n;
  for (ll i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      while (n % i == 0)
          n /= i;
      result -= result / i;
    }
  }
  if (n > 1)
    result -= result / n;
  return result % MOD;
}

void solve(){
  cin>>n>>m; 
  for(ll i = 0;i < n;++i) cin>>a[i];
  ll ans = 1; 
  for(ll i = 1;i < n;++i){
    if(a[i-1] % a[i] != 0){
      cout<<0<<endl;
      return; 
    }
    if(a[i] != 1){
      ll ephi = phi(a[i-1]/a[i]),
         ndi  = m/(a[i-1]/a[i]) - 
                (a[i-1]/a[i] + 1)/(a[i-1]/a[i]) + 1;
      ans = (ans*ephi*ndi) % MOD;
    }
    else if(a[i] == 1 && a[i] != a[i-1]) 
      ans = (ans * (m - m/a[i-1])) % MOD;
    else ans = (ans * m) % MOD;
  }
  cout<<ans<<endl;
}

signed main(){
  cin.tie(0) -> sync_with_stdio(0);
  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);
  ll t = 1; cin>>t;
  while(t--) solve();
}

