#include<bits/stdc++.h>
using ll= long long;
using namespace std;

class node{
    public:
    set<int>s;
    node* next;
    node(){
        this->next= NULL;
    }
};

void solve()
{
    int n, m, x;
    cin>>n>>m>>x;
    node* root= new node();
    root->s.insert(x);
    for(int i=0; i<m; i++){
        node* curr= new node();
        root->next= curr;
        set<int>:: iterator itr;
        int r;
        char c;
        cin>>r>>c;
        for(itr=root->s.begin(); itr!=root->s.end(); itr++){
            int v= *itr;
            if(c=='?')
            {
                int cw= (v+r)%n;
                if(cw==0){
                    cw= n;
                }
                int acw= v-r;
                if(acw<=0){
                    acw= acw+n;
                }
                curr->s.insert(cw);
                curr->s.insert(acw);
            }
            else if(c=='0'){
                int cw= (v+r)%n;
                if(cw==0){
                    cw= n;
                }
                curr->s.insert(cw);
            }
            else{
                int acw= v-r;
                if(acw<0){
                    acw= acw+n;
                }
                curr->s.insert(acw);
            }
        }
        root= root->next;
    }
    int sss= root->s.size();
    root->s.erase(0);
    if(root->s.size() != sss){
        root->s.insert(n);
    }
    cout<<root->s.size()<<endl;
    set<int>:: iterator itr;
    for(itr=root->s.begin(); itr!=root->s.end(); itr++){
        cout<< *itr<<" ";
    }
    cout<<endl;

}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}