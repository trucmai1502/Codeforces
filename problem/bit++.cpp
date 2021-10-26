#include <bits/stdc++.h>
using namespace std;


int main(){
    int t,x = 0;
    string input;
    cin>>t;
    while(t > 0){
      cin>>input;
      if(input[1] == '+'){
        x++;
      }else{
        x--;
      }
      --t;
    }
    cout<<x;
}
