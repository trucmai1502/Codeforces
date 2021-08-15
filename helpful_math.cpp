#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  vector<int> v;
  cin>>s;

  for(int i = 0; i < s.size();i += 2){
    int number = s[i]-'0';
    v.push_back(number);
  }
  sort(v.begin(),v.end());

  for (int i = 0; i < v.size(); i++) {
      if(i < v.size() - 1){
        cout << v[i]<<"+";
      }else{
        cout<<v[i];
      }
  }


}
