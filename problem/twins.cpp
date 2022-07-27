#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define lli long long int
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

#define forn(n) for(ll i = 0;i < n;++i)
#define pb(n) push_back(n)
#define mp make_pair
#define fi first
#define se second
#define gcd __gcd
#define getl(s) getline(cin, s);
#define setpre(x) fixed << setprecision(x)
#define mset(a) memset(a, 0, sizeof(a))
#define endl '\n'
#define spc " "


const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

ll n,a[1000];

bool comp(ll a,ll b){
  return a > b;
}

void solve(){
  ll sum = 0,take = 0,cnt = 0;
  forn(n) sum+=a[i];
  sort(a,a+n,comp);
  forn(n){
    if(sum >= take){
      take += a[i];
      sum -= a[i];
      cnt++;
    }
  }
  cout<<cnt;

}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
  
  cin>>n;
  forn(n) cin>>a[i];
  solve();

  return 0;
}

