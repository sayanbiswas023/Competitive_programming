#include <bits/stdc++.h>
#define pb push_back
//#define int long long int
#define ll long long int
using namespace std;
 
int n;
void solve(){
 
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //int *p=a[0];
   for(int i=1;i<=n;i++){
        auto itr=find(a,a+n,i);
        cout<<distance(a,itr)+1<<" ";
    }
    cout<<endl;
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--){
        solve();
    //}
    return 0;
}
