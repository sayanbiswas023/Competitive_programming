#include <bits/stdc++.h>
#define f(a,b,c) for(int a=b;a<c;a++)
#define pb push_back
#define mp make_pair
#define ll long long int
#define ld long double
#define vec vector
 
using namespace std;
 
ld n,m,a;
void solve(){
	cin>>n>>m>>a;
	cout<<fixed<<(long long)(ceil(n/a)*ceil(m/a))<<endl;
	
}
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
	return 0;
}
