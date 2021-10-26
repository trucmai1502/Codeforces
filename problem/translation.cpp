#include <bits/stdc++.h>
using namespace std;

int main(){
  string s,t;
  int count = 0;
  cin>>s;
  cin>>t;
  for(int i = 0; i < s.size();++i){
    if(s[i] == t[s.size() - 1 - i]){
      count++;
    }else{
      cout<<"NO";
      break;
    }
  }
  if(count == s.size()){
    cout<<"YES";
  }
}
