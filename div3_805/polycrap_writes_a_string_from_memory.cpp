#include <bits/stdc++.h>
using namespace std;
#define ll long long 
ll t;
string s;

int main(){
  cin>>t;
  while(t--){
    cin>>s;
    map<char,bool> a;
    ll cnt = 0, ans = 0;
    for(ll i = 0;i < s.length();++i){
      if(a[s[i]] == 0){
        ++cnt;
        if(cnt == 4){
          ++ans;
          cnt = 1;
          for(char j = 'a';j <= 'z';++j) a[j] = 0;
        }
        a[s[i]] = 1;
      }
       
    }
    if(cnt != 4) ++ans;
    cout<<ans<<endl;
  }
}
