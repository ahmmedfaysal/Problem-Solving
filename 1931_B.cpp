#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll p= 1e9+7;


void solve(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+= arr[i];
    }
    int carry=0;
    int ele= sum/n;
    for(int i=0; i<n; i++){
        arr[i]-=ele;
        carry+=arr[i];
        if(carry<0){
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
