#include <bits/stdc++.h>
using namespace std;

bool is_primes(int n){
	if(n < 2) return false;
	for(int i = 2;i*i <= n;++i){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

void solve(int n){
	for(int i = 2;i <= n/2;++i){
		if(is_primes(i) == false && is_primes(n - i) == false){
			cout<<i<<" "<<n - i;
			break;
		}
	}

}

int main(){
	int n;
	cin>>n;
	solve(n);
}
