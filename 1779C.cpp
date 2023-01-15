#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<ll,ll>
#define bit(i,mask) mask & (1<<i)
#define bon(i,mask) mask | (1<<i)
#define boff(i,mask) mask & ~(1<<i)
#define flip(i,mask) mask ^= (1<<i)
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
ll n,k,a[MN1],s[MN1];
//suppose p(k) > p(x) 
//if(x : 1 -> k) p(k) = p(x) + a[x+1] + ... + a[k] > p(x) -> a[x+1]+...+a[k] > 0 
//if(x : k -> n) p(x) = p(k) + a[k+1]+...+a[x] < p(k) -> a[k+1]+..+a[x] < 0 

void solve(){
  ll ans = 0,sum = 0;
  priority_queue<ll> pq1,pq2; 
  for(ll i = k - 1;i > 0;--i){
    sum += a[i+1]; 
    pq1.push(a[i+1]);
    while(sum > 0){
      ll tmp = pq1.top(); pq1.pop();
      sum -= 2*tmp;++ans;
    }
  }
  sum = 0;
  for(ll i = k + 1;i <= n;++i){
    sum += a[i];
    pq2.push(-a[i]); 
    while(sum < 0){
      ll tmp = pq2.top(); pq2.pop();
      sum += 2*tmp; ++ans;
    }
  }
  cout<<ans<<endl;
}

int main(){
  cin.tie(0) -> sync_with_stdio(0);
  //freopen("i.inp", "r", stdin);
  //freopen("o.out", "w", stdout);
  ll t = 1; cin>>t;
  while(t--){
    cin>>n>>k;
    for(ll i = 1;i <= n;++i) cin>>a[i];
    solve();
  }
  return 0;
}

