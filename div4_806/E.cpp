#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
//#define isvowel(a) (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define gcd __gcd
#define getl(s) getline(cin, s);
#define setpre(x) fixed << setprecision(x)
#define mset(a) memset(a, 0, sizeof(a))
#define endl '\n'
const int N=200050,M=1000000007;
const ll INF=1e18+7;

ll t, n;
string a[1000];

int check1(string x[]){
	ll ans=0;
		for(ll i=0; i<n; i++){
			for(ll j=0; j<n; j++){
				ll dem=0;
				if(x[i][j]=='1'){
					if(x[j][n-i-1]=='0') {
						dem++;
						x[j][n-i-1]='1';
					}
					if(x[n-i-1][n-j-1]=='0') {
						dem++;
						x[n-i-1][n-j-1]='1';
					}
					if(x[n-j-1][i]=='0') {
						dem++;
						x[n-j-1][i]='1';
					}
					ans+=min(dem, 4-dem);
				}
			}
		}
		return ans;
}

signed main(){
	ios_base::sync_with_stdio(NULL); cin.tie(nullptr); cout.tie(nullptr);
//    freopen(".inp","r",stdin);
//    freopen(".out","w",stdout);
	cin>>t;
	while(t--){
		cin>>n;
		for(ll i=0; i<n; i++) cin>>a[i];
		
		cout<<check1(a)<<endl;
	}
    return 0;
}
