#include <bits/stdc++.h>
using namespace std;

void process(string input){
  if(input.size() > 10){
    cout<<input[0]<<input.size() - 2<<input[input.size() - 1]<<"\n";
  }else{
    cout<<input<<"\n";
  }
}


int main(){
  int t;
  cin>>t;
  while(t > 0){
    string input;
    cin>>input;
    process(input);
    --t;
  }

}
