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
#define forn(a,n,c) for(ll i = a;i < n;i += c)
#define fornd(a,n,c) for(ll i = a;i >= n;--c)
#define ins(n) insert(n)
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

const int MAX_N = 2e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

ll n; 
vector<ll>d;

bool lucky(ll n){
  string s = to_string(n);
  for(auto i : s){
    if(i != '4' && i != '7') return false;
  }
  return true;
}

void solve(){
  for(ll i = 1;i*i <= n;++i){
    if(n % i == 0 && n/i == i) d.pb(i);
    else if(n % i == 0){
      d.pb(i);
      d.pb(n/i);
    }
  }
  for(auto i : d){
    if(lucky(i)){
      cout<<"YES";
      return;
    }
  }
  cout<<"NO";
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
  cin>>n;
  solve();
  return 0;
}

