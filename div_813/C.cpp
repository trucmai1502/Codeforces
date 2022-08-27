#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <stack>
#include <utility>
#include <sstream>

using namespace std;
typedef long long ll;

ll m[1000000];

int main(){
    int t;cin>>t;
    while(t--){


        ll n,temp=0,ans=0;

        cin>>n;
        ll a[200000];
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]=-1;
        }
        for(int i=n-1;i>=1;i--){
            if(a[i]<a[i-1]){
                temp=i;
                break;
            }
        }

        for(int i=0;i<n;i++){
            if(m[a[i]]==-1){
                m[a[i]]=i;
            }
        }

        for(int i=temp;i<n;i++){
            if(m[a[i]]<temp && m[a[i]]!=-1){
                temp=i+1;
            }
        }
        // cout<<temp<<endl;

        set<int> dem;
        for(int i=0;i<temp;i++){
            dem.insert(a[i]);
        }
        cout<<(ll)(dem.size())<<endl;
        // for(int i=0;i<n;i++){
//
        // }
        // cout<<ans<<endl;
    }
}
