#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int res = 240 - k,sum = 0,ans = 0;
	for(int i = 1;i <= n;++i){
		sum += 5*i;
		if(sum > res) break;
		++ans;
	}
	cout<<ans;
}
