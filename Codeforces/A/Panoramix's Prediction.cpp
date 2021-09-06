#include <bits/stdc++.h>
#define f(a,b,c) for(int a=b;a<c;a++)
#define pb push_back
#define mp make_pair
#define ll long long int
#define ld long double
#define vec vector
 
using namespace std;
 
vec<int>v;
void sieve(){ //Sieve of Eratosthenes
	int p=50;
	bool prime[p];
	memset(prime,true,sizeof(prime));
 
	for(int i=2;i*i<=p;i++){
		if(prime[i]==true){
			for(int j=i*i;j<=p;j+=i){
				prime[j]=false;
			}
		}
	}
	
	for(int i=2;i<=p;i++){
		if(prime[i])v.pb(i);
	}
 
}
 
int n,m;
void solve(){
	cin>>n>>m;
	if(v[find(v.begin(),v.end(),n)-v.begin()+1]==m)cout<<"YES\n";
	else cout<<"NO\n";
	
}
 
 
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    sieve();
    solve();
	return 0;
}
