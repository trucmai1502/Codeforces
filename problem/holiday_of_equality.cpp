#include <bits/stdc++.h>
using namespace std;

int const max_n = 100;
int arr[max_n];
int n;

void solve(){
	int ans = 0;
	int max_ = *max_element(begin(arr),end(arr));
	for(int i = 0;i < n;++i){
		ans += (max_ - arr[i]);
	}
	cout<<ans;
}

int main(){
	cin>>n;
	for(int i = 0;i < n;++i) cin>>arr[i];
	solve();

}
