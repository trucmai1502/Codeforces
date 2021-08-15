#include <bits/stdc++.h>
using namespace std;

int main(){
  bool a,b,c;
  int t,count = 0;
  cin>>t;
  while (t > 0){
    cin>>a>>b>>c;
    if(a + b + c >= 2){
      count++;
    }
    --t;
  }
  cout<<count;
}
