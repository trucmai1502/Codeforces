#include <bits/stdc++.h>
using namespace std;

bool is_divided(int weight){
    if (weight % 2 == 0 && weight > 2){
      return true;
    }else{
      return false;
    }
}

int main(){
  int weight;
  cin>>weight;
  if(is_divided(weight) == true){
    cout<<"YES";
  }else{
    cout<<"NO";
  }

}
