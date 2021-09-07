#include <bits/stdc++.h>
#define f(a,b,c) for(int a=b;a<c;a++)
#define pb push_back
#define mp make_pair
#define ll long long int
#define ld long double
#define vec vector
 
using namespace std;
 
 
int n,t;
void solve(){
	cin>>n;
	cin>>t;
 
	int a,b,flag=1;
	while(n--){
		cin>>a>>b;
		if(t==a || t== (7-a) || t==b || t== (7-b)) flag=0;
	}
	if(flag)cout<<"YES\n";
	else cout<<"NO\n";
	
}
 
 
 
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    solve();
	return 0;
}
