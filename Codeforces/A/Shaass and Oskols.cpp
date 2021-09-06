#include <bits/stdc++.h>
#define pb push_back
//#define int long long
#define ll long long int
using namespace std;
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,m;
	cin>>n;
 
	int a[n];
	for(int i=0;i<n;i++){
        cin>>a[i];
	}
	cin>>m;
	int x,y;
	while(m--){
        cin>>x>>y;
        if(x==1){
            a[x]+=(a[x-1]-y);
            a[x-1]=0;
 
        }
        else if(x==n){
            a[x-2]+=(y-1);
        a[x-1]=0;
        }
        else{
                a[x-2]+=(y-1);
        a[x]+=(a[x-1]-y);
        a[x-1]=0;
 
        }
	}
	for(int i=0;i<n;i++){
        cout<<a[i]<<"\n";
	}
 
	return 0;
}
