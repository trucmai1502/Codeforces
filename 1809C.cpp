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
ll n,k,sum,a[MN1]; 
void solve(){
  cin>>n>>k;
  ll i = 1;
  while(i*(i+1)/2 <= k){
    a[i] = i; 
    sum += a[i];
    cout<<a[i]<<spc; 
    ++i;
  }
  ll diff = k - i*(i-1)/2;
  cout<<diff<<endl;
}

signed main(){
  cin.tie(0) -> sync_with_stdio(0);
  freopen("i.inp","r",stdin);
  freopen("o.out","w",stdout);
  ll t = 1; cin>>t;
  while(t--) solve();
}


