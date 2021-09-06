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
	int flag=1;
	string s;
	char d,o;
	cin>>s;
	d=s[0];
	o=s[1];
	if(s[0]!=s[n-1])flag=0;
	if(d==o) flag=0;
	f(i,1,n-1){
		if(s[i]!=o)flag=0;
	}
	f(i,1,n){
		cin>>s;
		if(s[i]!=d || s[n-i-1]!=d)flag=0;
		f(j,0,n){
			if(j!=i && j!=(n-i-1) && (s[j]!=o)) flag=0;
		}
 
	}
	if(flag==0)cout<<"NO\n";
	else cout<<"YES\n";
	
}
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
	 return 0;
}
