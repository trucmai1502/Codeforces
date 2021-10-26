#include <bits/stdc++.h>
using namespace std;

void ans(uint64_t number){
  uint64_t count = 0;
  while(number > 0){
    int digit = number % 10;
    //cout<<digit<<"\n";
    if(digit == 4 || digit == 7){
      ++count;
    }
    number /= 10;
  }

  if(count == 4 || count == 7){
    cout<<"YES";
  }else{
    cout<<"NO";
  }
}

int main(){
  uint64_t number;
  cin>>number;
  ans(number);

}
