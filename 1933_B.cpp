#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll p= 1e9+7;


void solve(){
    int n, sum=0;
    cin>>n;
    bool check=false;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
        if(arr[i]%3 == 1){
            check=true;
        }
    }

    if(sum%3 == 0){
        cout<<0<<endl;
    }
    else if(sum%3 == 2){
        cout<<1<<endl;
    }
    else{
        if(check){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    
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
