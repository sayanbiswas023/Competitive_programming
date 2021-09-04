#include <bits/stdc++.h>
#define pb push_back
#define MAX_INT 1000001
#define f(a,b,c) for(int a=b;a<c; a++)
//#define int long long int
#define ll long long int
using namespace std;
 
int p[MAX_INT] = {0};
int k[MAX_INT] = {0};
 
void sieve()
{
    for (int i = 1; i < MAX_INT; i++)
        k[i] = i;
 
    for (int i = 2; i < MAX_INT; i++) {
        if (p[i] == 0)
            for (int j = i; j < MAX_INT; j += i) {
 
                p[j] = 1;
                while (k[j] % (i * i) == 0)
                    k[j] /= (i * i);
            }
    }
}
 
ll n;
void solve(){
    cin>>n;
    ll a[n]={0};
    // set<int> s;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        //s.insert(a[i]);
    }
    // int g=s.size();
    int res=0;
    
    unordered_map<ll,ll> b;
 
    for (long int i = 0; i < n; i++){
        b[k[a[i]]]++;
    }
    for(auto i:b){
        res+=((i.second-1)*i.second)/2;
    }
    cout<<n*(n-1)/2-res<<endl;
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin>>t;
    // cout<<endl;
    // while(t--){
    //     solve();
    // }
    string a,b;
    cin>>a>>b;
 
    if(a==b)cout<<-1<<endl;
    else cout<<max(a.size(),b.size());
    return 0;
}
