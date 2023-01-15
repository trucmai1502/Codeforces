#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<ll,ll>
#define fi first 
#define se second 
#define all(a) (a).begin(), (a).end()
#define gcd __gcd
#define mset(a,v) memset(a, v, sizeof(a))
#define spc " "
#define endl '\n' 
const int MN1 = 1e6 + 5, MN2 = 1e4 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 0x3f3f3f3f3f;

bool p[100];
void sieve(){
  mset(p,true);
  for(ll i = 2;i <= 60;++i)
    for(ll j = 2*i;j <= 60;j += i)
      p[j] = false; 
  
}

void solve(){


}

int main(){
  cin.tie(0) -> sync_with_stdio(0);
  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);
  ll t = 1; //cin>>t;
  while(t--){
    cin>>n;
    solve();
  }
  return 0;
}

