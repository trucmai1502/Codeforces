#include <bits/stdc++.h>
using namespace std;

int main(){
  int k,w;
  long long n;
  long long cost = 0;
  cin>>k>>n>>w;
  for(int i = 1;i <= w;++i){
    cost += i*k;
  }
  if(n - cost >= 0){
    cout<<0;
  }else{
    cout<<abs(n - cost);
  }
}
