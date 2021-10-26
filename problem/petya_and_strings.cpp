#include "bits/stdc++.h"
using namespace std;

int main(){
  string a,b;
  int count = 0;
  cin>>a;
  cin>>b;
  for(int i = 0;i < a.size();++i){
    if(tolower(a[i]) == tolower(b[i])){
      ++count;
    }else if(tolower(a[i]) < tolower(b[i])){
      cout<<-1;
      break;
    }else if(tolower(a[i]) > tolower(b[i])){
      cout<<1;
      break;
    }
  }
  if(count == a.size()){
    cout<<0;
  }
}
