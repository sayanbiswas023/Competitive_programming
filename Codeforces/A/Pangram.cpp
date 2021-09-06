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
    int t;
    cin>>t;
    string s;
    // while(t--){
    //     solve();
    // }
    cin>>s;
 
    unordered_map<int,int> m;
    f(i,0,t){
        if(97<=s[i] && s[i]<=122) m[s[i]-'a'+1]++;
        else m[s[i]-'A'+1]++;
    }
    //cout<<m.size();
    //cout<<endl;
    // for(auto i:m)cout<<i.first<<" ";
    //cout<<endl;
    if(m.size()==26)cout<<"YES\n";
    else cout<<"NO\n";
    //cout<<'T'-'A';
    return 0;
}
