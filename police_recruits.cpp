#include <bits/stdc++.h>
using namespace std;

int const max_n = 1e5;
int n,police,cnt;
int event[max_n];

void solve(){
	for(int i = 0;i < n;++i){
		if(event[i] >= 0){
			police += event[i];
		}
		else if(event[i] == -1){
			if(police > 0){
				--police;
			}else{
				++cnt;
			}
		}
	}

	cout<<cnt;
}

int main(){
	cin>>n;
	for(int i = 0;i < n;++i) cin>>event[i];
	solve();
}
