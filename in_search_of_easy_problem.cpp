#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int count = 0;
  cin>>n;

  for(int i = 0;i < n;++i){
    int tem;
    cin>>tem;
    count += tem;
    if(tem >= 1){
      cout<<"HARD";
      break;
    }
  }

  if(count == 0){
    cout<<"EASY";
  }

}
