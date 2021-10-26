#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int p,q,count = 0;
  cin>>n;
  while(n > 0){
    cin>>p>>q;
    if(q - p >= 2){
      count++;
    }
    //cout<<count<<endl;
    --n;
  }
  cout<<count;
}
