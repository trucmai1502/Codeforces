#include <bits/stdc++.h>
using namespace std;

void solve(int n,char l[]){	
	int count = 0;
	for(int i = 0;i < n;++i){
		if(l[i] == l[i + 1]){
			++count;
		}
	}
	cout<<count;

}

int main(){
	int n;
	cin>>n;
	char l[n];
	for(int i = 0;i < n;++i) cin>>l[i];
	solve(n,l);
}
