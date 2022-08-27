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

const int MAX_N = 2e6;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

ll t,n;

bool prime(ll n){
  if (n < 2) return false;
  else{
    for(ll i = 2;i*i <= n;++i){
      if(n % i == 0) return false; 
    }
    return true;  
  }
}

void solve(){
  if(n >= 4 && (ll)sqrt(n)*(ll)sqrt(n) == n && prime((ll)sqrt(n)) == true) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;

}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
  cin>>t;
  while(t--){
    cin>>n;
    solve();
  }
  return 0;
}

