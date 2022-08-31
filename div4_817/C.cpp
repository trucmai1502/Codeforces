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
#define mp(val,ind) make_pair(val,ind) 
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
 
ll t,n;
vector<string> a(3*1000);
map<string,ll> cnt;
string s;
double p1,p2,p3;
 
void solve(){
  p1 = 0,p2 = 0,p3 = 0;
  for(ll i = 0;i < 3*n;++i){
    if(cnt[a[i]] == 1){
      if(i + 1 <= n) p1 += 3;
      else if(i + 1 >= n + 1 && i + 1 <= 2*n) p2 += 3;
      else if(i + 1 >= 2*n +1 && i + 1 <= 3*n) p3 += 3;
    }else if(cnt[a[i]] == 2){
      if(i + 1 <= n) p1++;
      else if(i + 1 >= n + 1 && i + 1 <= 2*n) p2++;
      else if(i + 1 >= 2*n +1 && i + 1 <= 3*n) p3++;
    }
  }
  cout<<p1<<" "<<p2<<" "<<p3<<endl;
}
 
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
  cin>>t;
  while(t--){
    cin>>n;
    for(ll i = 0;i < 3*n;++i){
      cin>>a[i];
      cnt[a[i]]++;
    }
    solve();
    cnt.clear();
  }
 
  return 0;
}
