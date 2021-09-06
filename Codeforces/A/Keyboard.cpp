#include <bits/stdc++.h>
#define f(a,b,c) for(int a=b;a<c;a++)
#define pb push_back
//#define int long long int
#define ll long long int
using namespace std;
 
ll n,m;
void solve(){
 
    cin>>n>>m;
    //ll a[n]={0};
    map<ll,ll,greater<ll>>p;
    ll x,y;
    while(m--){
        cin>>x>>y;
        if(y>p[x])p[x]=y;
 
    }
    ll res=0;
    ll k=1,z=n;
 
    for(auto itr=p.begin();itr!=p.end() && n>0;++itr){
        //cout<<itr->first<<" "<<itr->second<<"\n";
        k=(k*itr->second)/__gcd(k,itr->second);
        res+=(n-z/k)*(itr->first);
        n=z/k;
        //h=y.first;
 
    }
    cout<<res<<endl;
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin>>t;
    string k="qwertyuiopasdfghjkl;zxcvbnm,./";
    char a;
    cin>>a;
    string s;
    // while(t--){
    //     solve();
    // }
    cin>>s;
 
   if(a=='R'){
        f(i,0,s.size()){
            cout<<k[k.find(s[i])-1];
        }
   }
   else{
        f(i,0,s.size()){
            cout<<k[k.find(s[i])+1];
        }
   }
   cout<<endl;
    return 0;
}
