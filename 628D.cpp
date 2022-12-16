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

int n,m,d,dp[2007][2][2][2007];
string a,b;

int calc(int pos,bool fa,bool fb,int num){
  num %= m;
  if(pos == n+1) return (num % m == 0);
  int &res = dp[pos][fa][fb][num];
  if(res != -1) return res; 
  res = 0;
  if(pos % 2 == 0){
    int l = 0,h = 9;
    if(fa == true) l = a[pos] - '0'; 
    if(fb == true) h = b[pos] - '0';
    if(l > d || d > h) return 0;
    bool nfa = 0,nfb = 0;
    if(d == a[pos] - '0' && fa == true) nfa = true; 
    if(d == b[pos] - '0' && fb == true) nfb = true; 
    res += calc(pos+1,nfa,nfb,(num*10 + d) % m);
    res %= MOD;
  }else{
    int l = 0,h = 9;
    if(fa == true) l = a[pos] - '0'; 
    if(fb == true) h = b[pos] - '0';
    for(int i = l;i <= h;++i){
      bool nfa = false,nfb = false; 
      if(i == l && fa == true) nfa = true; 
      if(i == h && fb == true) nfb = true;
      res += calc(pos+1,nfa,nfb,(num*10+i)%m);
      res %= MOD;
    }
  }
  return res % MOD; 
}


int main(){
  cin.tie(0) -> sync_with_stdio(0);

  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);

  cin>>m>>d>>a>>b; 
  int n = a.size(); 
  memset(dp,-1,sizeof dp);
  cout<<calc(1,1,1,0)<<endl;
  return 0;
}

