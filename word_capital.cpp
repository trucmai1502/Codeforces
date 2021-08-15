#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
  if (((int)s[0] >= 65) && ((int)s[0] <= 90)){
    cout<<s;
  }else{
    s[0] = char((int)s[0] - 32);
    cout<<s;
  }
}
