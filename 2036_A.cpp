#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll p= 1e9+7;


void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool check=true;
    for(int i=1; i<n; i++){
        int x= abs(arr[i]-arr[i-1]);
        if(x!=7 && x!=5){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}
