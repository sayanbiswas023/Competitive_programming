#include <bits/stdc++.h>
#define f(a,b,c) for(int a=b;a<c;a++)
#define pb push_back
#define mp make_pair
#define ll long long int
#define ld long double
 
using namespace std;
 
 
ll n,k;
void solve(){
	cin>>n>>k;
	ll ans=0;
	
	if(n%2==0){
		if(k>n/2){
			k-=n/2;
			ans+=k;
			ans+=k;
		}
		//else if()
		else{
			ans+=k;
			ans+=k;
			ans--;
		}
	}
	else{
		if(k>n/2+1){
			k-=(n+1)/2;
			ans+=k;
			ans+=k;
		}
		
		else{
			ans+=k;
			ans+=k;
			ans--;
		}
	}
 
cout<<ans<<endl;
}
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    
    solve();
        
 
	
	return 0;
}
