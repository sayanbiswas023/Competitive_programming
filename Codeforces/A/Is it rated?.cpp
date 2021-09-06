#include <bits/stdc++.h>
#define f(a,b,c) for(int a=b;a<c;a++)
#define pb push_back
#define mp make_pair
#define ll long long int
#define ld long double
#define vec vector
 
using namespace std;
 
int n;
void solve(){
	cin>>n;
	int ans=0;
	int x,y;
	vec<int>a;
	vec<int>b;
	f(i,0,n){
		cin>>x>>y;
		if(x!=y) ans=1;
		b.pb(y);
		a.pb(y);
	}
 
	if(ans==1)cout<<"rated\n";
	else{
		sort(b.begin(),b.end(),greater<int>());
		f(i,0,n){
			if(b[i]!=a[i]){ cout<<"unrated\n";
			return;}
		}
		cout<<"maybe\n";
		return;
	}
}
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
     solve();
       
	
	return 0;
}
