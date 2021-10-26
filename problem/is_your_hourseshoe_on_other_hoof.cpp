#include <bits/stdc++.h>
using namespace std;

int main(){
  int shoe[4];
  int count = 0;
  cin>>shoe[0]>>shoe[1]>>shoe[2]>>shoe[3];

  sort(shoe,shoe+4);
  for(int i = 0;i < 3;++i){
    if(shoe[i] == shoe[i+1]){
      ++count;
    }
  }
  cout<<count;
}
