#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define gcd __gcd
#define getl(s) getline(cin, s);
#define setpre(x) fixed << setprecision(x)
#define mset(a) memset(a, 0, sizeof(a))
#define endl '\n'

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

ll t,k;
string s;
ll a[50];

void solve(){
  ll ans = 0;
  map<char,bool>check;
  for(ll i = 0;i < k;++i){
    if(check[s[i]] == 0) ans+=2;
    else ans++;
    check[s[i]] = 1;
  }
  cout<<ans<<endl;

}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
  cin>>t;  
  while(t--){
    cin>>k;
    cin>>s;
    solve();

  }

  return 0;
}

