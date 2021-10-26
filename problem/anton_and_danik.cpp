#include <bits/stdc++.h>
using namespace std;

int main(){
  int games;
  string s;
  int aton_won_count = 0;
  cin>>games;
  cin>>s;
  for(int i = 0; i < s.size();++i){
    if(s[i] == 'A'){
      aton_won_count++;
    }
  }
  if(aton_won_count > s.size() - aton_won_count){
    cout<<"Anton";
  }else if(aton_won_count < s.size() - aton_won_count){
    cout<<"Danik";
  }else{
    cout<<"Friendship";
  }

  return 0;
}
