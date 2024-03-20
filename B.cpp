#include<bits/stdc++.h>
using ll= long long;
using namespace std;


void solve()
{
    ll a, b, c;
    cin>>a>>b>>c;

    ll ans=0;
    ans+=(c/a);
    ans+=(c/b);
    ans+=2;
    cout<<ans<<endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}