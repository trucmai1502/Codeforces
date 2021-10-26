#include <bits/stdc++.h>
using namespace std;

int main(){
  long n;
  cin>>n;
  while(n > 0){
    long long a,b,count = 0;
    cin>>a>>b;
    if(a % b == 0){
      cout<<0<<"\n";
    }
    else{
      cout<<b - a%b<<"\n";
    }
    --n;
  }


}
