#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define lli long long int
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(),(a).rend()

#define min_a(a,n) *min_element(a,a+n)
#define max_a(a,n) *max_element(a,a+n)
#define forn(i,a,n,c) for(ll i = a;i < n;i += c)
#define fornd(i,a,n,c) for(ll i = a;i >= n;--c)
#define ins(n) insert(n)
#define pb(n) push_back(n)
#define mp(val,ind) make_pair(val,ind) 
#define fi first
#define se second
#define gcd __gcd
#define getl(s) getline(cin, s);
#define setpre(x) fixed << setprecision(x)
#define mset(a) memset(a, 0, sizeof(a))
#define endl '\n'
#define spc " "

const int MAX_N = 1e6 + 5;
const int MAX_N_2 = 1e4 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

ll t,n,a[MAX_N],cnt; 

ll p(ll x, ll n){
  if (n == 0) return 1; 
  else{
    ll t = p(x,floor(n/2));
    if(n % 2 == 0) return t*t;
    else return t*t*x;
  }
}

void solve(){
  ll ans = 0;
  for(ll i = (int)log2(n); i >= 1 && p(2,i) <= n;--i){
    if(cnt < n){
      ll l = 1;
      if(cnt < n){
        while(p(2,i)*l <= n){
          cnt += i; 
          ++ans;
        }
      }
    }
  }
  //cout<<endl;
  if(cnt >= n) cout<<ans<<endl;
  else cout<<-1<<endl;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen(".inp","r",stdin);
  //freopen(".out","w",stdout);

  cin>>t;
  while(t--){
    cin>>n;
    cnt = 0;
    forn(i,0,n,1){
      cin>>a[i];
      if(a[i] % 2 ==0){
        ll t = a[i];
        while(t % 2 == 0){
          t /= 2; 
          cnt++;
        }
      }
    }
    solve();
  }

  return 0;
}
