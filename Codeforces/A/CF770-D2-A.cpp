#include <bits/stdc++.h>
#define pb push_back
//#define int long long int
#define ll long long int
using namespace std;
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<char>v;
    for(int i=0;i<n;i++){
        v.pb('a'+i%k);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
 
 
	return 0;
}
