#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;

  int count = 0;
  int check = 0;

  for(int i = 0;i < s.size();++i){
    for(int j = i + 1;j < s.size();++j){
        if(s[i] == s[j]){
          check++;
        }
    }
    if(check == 0){
      count++;
    }
    check = 0;
  }
  if(count % 2 == 0){
    cout<<"CHAT WITH HER!";
  }
  else{
    cout<<"IGNORE HIM!";
  }
}
