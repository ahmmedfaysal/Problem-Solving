#include<bits/stdc++.h>
using ll= long long;
using namespace std;


void solve()
{
    ll i, e, u;
    cin>>i>>e>>u;
    ll tent=0;
    tent+=i;
    tent+=(e/3);
    ll rem=e%3;
    if((rem==2 && u<1) || (rem==1 && u<2)){
        cout<<-1<<endl;
        return;
    }
    else if(rem==1 && u>=2){
        tent+=1;
        u-=2;
    }
    else if(rem==2 && u>=1){
        tent+=1;
        u--;
    }
    
    tent+=(u/3);
    if(u%3>0){
        tent++;
    }
    cout<<tent<<endl;

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