#include<bits/stdc++.h>
using ll= long long;
using namespace std;

const int m = 200007;
int arr[m];

int f(int x){
    int ans=0;
    while(x){
        ans+=(x%10);
        x/=10;
    }
    return ans;
}

void solve(){
    int n;
    cin>>n;
    cout<<arr[n]<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    arr[0]=0;
    for(int i=1; i<m; i++){
        arr[i]=arr[i-1]+f(i);
    }

    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}
