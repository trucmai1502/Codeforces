#include <bits/stdc++.h>
using namespace std;

int x[3];
void solve(){
	cout<<*max_element(begin(x),end(x)) - *min_element(begin(x),end(x));
}

int main(){
	cin>>x[0]>>x[1]>>x[2];
	solve();
}
