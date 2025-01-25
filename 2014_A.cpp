#include<bits/stdc++.h>
#define nn '\n'
using ll= long long;
using namespace std;

void solve() {
    int n, k;
    cin>>n>>k;
    int curr=0, ans=0, x;
    for(int i=0; i<n; i++){
        cin>>x;
        if(x>=k){
            curr+=x;
        }
        if(x==0 and curr>0){
            ans++;
            curr--;
        }
    }
    cout<<ans<<nn;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}
