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

string a;
ll t, n, k, change[MAX_N];

void solve(){
    cin>>n>>a;
    k=n;
    ll sum=0;
    // cout<<n/2<<" "<<(n+1)/2<<endl;
    for(ll i=0; i<n; i++){
        if(a[i]=='L'){ 
            sum+=i;
            if(i<=(n-1)/2) change[i]=(n-i-1)-i;
        }
        else {
            sum+=n-i-1;
            if(i>=n/2) change[i]=i-(n-i-1);
        }
        // cout<<change[i]<<" ";
    }
    sort(change, change+n, greater<int>());
    for(ll i=0; i<n; i++){
        sum+=change[i];
        cout<<sum<<" ";
        change[i]=0;
    }
    cout<<endl;
    
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
  cin>>t;
  while(t--){
    solve();
  }

  return 0;
}

