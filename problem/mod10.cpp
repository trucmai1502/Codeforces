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

ll t,n,a[MAX_N]; 

void solve(){
  bool f5 = false,f2 = false,f12 = false,ans = false;
  forn(0,n,1){
    if(a[i] % 10 == 0) f5 = true;
    if(a[i] % 10 == 5){
      f5 = true;
      a[i] += 5;
    }
  }

  if(f5){
    if(min_a(a,n) == max_a(a,n)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }else{
   forn(0,n,1){
      while(a[i] % 10 != 2) a[i] += a[i] % 10;
      if(a[i] % 20 == 2) f2 = true;
      else f12 = true;
   }  
   if(f2 & f12) cout<<"NO";
   else cout<<"YES";
   cout<<endl;
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
  cin>>t;
  while(t--){
    cin>>n;
    forn(0,n,1) cin>>a[i];
    solve();
  }

  return 0;
}

