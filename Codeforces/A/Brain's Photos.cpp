#include <bits/stdc++.h>
#define f(a,b,c) for(int a=b;a<c;a++)
#define pb push_back
#define mp make_pair
#define ll long long int
#define ld long double
#define vec vector
 
using namespace std;
 
int n,m;
void solve(){
	cin>>n>>m;
	
	int flag=0;
	char x;
	f(i,0,n){
		f(j,0,m){
			cin>>x;
			if(x!='W' && x!='B' && x!='G') flag=1;
		}
	}
	if(flag==1)cout<<"#Color\n";
	else cout<<"#Black&White\n";
}
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
      
	return 0;
}
