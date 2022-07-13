#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll m,t;

ll digit(ll m){
  int d = 0;
  if(m < 10) return 1;
  else{
    while(m >= 10){
      m /= 10;
      ++d;
    }
    return d + 1;
  }

}

void solve(){
  ll r = m - pow(10,digit(m) - 1);
  cout<<r<<"\n";
}


int main(){
  cin>>t;
  while(t > 0){
    cin>>m;
    solve();
    --t;
  }
}
