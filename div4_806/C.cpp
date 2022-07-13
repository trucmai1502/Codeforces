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

ll t,n,j;
ll a[MAX_N];
string s;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
  cin>>t;
  while(t--){
    cin>>n;
    for(int i = 0;i < n;++i)cin>>a[i];
    for(int i = 0;i < n;++i){
      cin>>j>>s;
      for(int k = 0;k < j;++k){
        if(s[k] == 'D') a[i]++;
        else a[i]--;
        if(a[i] < 0) a[i] = 9;
        if(a[i] > 9) a[i] = 0;
      }
      cout<<a[i]<<" ";
    }
    cout<<endl;
  }
 return 0;
}

