#include <bits/stdc++.h>
using namespace std;

void process(int number){
  while(true){
    number++;
    int a = number/1000;
    int b = number/100%10;
    int c = number/10%10;
    int d = number%10;
    if(a != b && a != c && a != d && b != c && b != d && c!= d){
      break;
    }
  }
  cout<<number;
}

int main(){
  int n;
  cin>>n;
  process(n);
}
