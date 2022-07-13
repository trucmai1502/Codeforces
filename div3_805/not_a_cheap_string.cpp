#include <bits/stdc++.h>
using namespace std;
#define ll long long 
ll const lim = 2*1e5;
string s;
ll t,p;
int a[lim];

bool comp(int a, int b) return a > b;

void solve(){
    ll n = s.size();
    sort(a,a + n,comp);
    ll cost = 0; 
    for(ll i = 0;i < n;++i) cost += a[i];
    for(ll i = 0;i < n;++i){
      if(cost > p){
        char t = a[i] + 'a' - 1;
        s.erase(remove(s.begin(),s.end(),t),s.end());
        cost -= a[i];
      }else{
        break;
      }
    }
    cout<<s<<"\n";
    
}

int main(){
  cin>>t;
  while(t--){
    cin>>s; 
    cin>>p;
    ll n = s.size();
    for(ll i = 0;i < n;++i) a[i] = s[i] - 'a' + 1;
    solve(); 
  }

}
