#include <bits/stdc++.h>
using namespace std;

string convert(string input,bool type){
  //Lowercase
  if(type == true){
    for(int i = 0; i < input.size();++i){
      if(((int)input[i] >= 65) && ((int)input[i] <= 90)){
        input[i] = char((int)input[i] + 32);
      }
    }
  }
  //Uppercase
  else{
    for(int i = 0; i < input.size();++i){
      if(((int)input[i] >= 97) && ((int)input[i] <= 122)){
        input[i] = char((int)input[i] - 32);
      }
    }
  }
  return input;
}

int main(){
  string s;
  bool type; // true -> lowercase, false -> uppercase
  int count_up = 0,count_down = 0;
  cin>>s;

  for(int i = 0; i < s.size();++i){
    if(((int)s[i] >= 65) && ((int)s[i] <= 90)){
      count_up++;
    }else{
      count_down++;
    }
  }

  if(count_up > count_down){
    type = false;
  }else{
    type = true;
  }

  cout<<convert(s,type);
}
