#include <bits/stdc++.h>
#define f(a,b,c) for(int a=b;a<c;a++)
#define pb push_back
#define mp make_pair
#define ll long long int
#define ld long double
#define vec vector
 
using namespace std;
 
 
int p,k;
void solve(){
	cin>>p>>k;
	ll n;
	int count=0;
	while(p--){
		cin>>n;
		set<int>s;
		bool flag=true;
		while(n>0){
			s.insert(n%10);
			n/=10;
		}
		
		auto elm=s.begin();
		f(i,0,k+1){
			if(*elm!=i || i>s.size()-1){flag=false;break;}
			elm++;
		}
		if(flag)count++;
	}
	cout<<count<<"\n";
	
}
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    
    solve();
 
	
	return 0;
}
