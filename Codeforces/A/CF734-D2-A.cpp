#include <bits/stdc++.h>
#define pb push_back
//#define int long long int
#define ll long long int
using namespace std;
 
ll m=1000000007;
ll fact(int n){
    if (n==1) return 1;
    else return n*fact(n-1);
}
int a,b,k;
void solve(){
    cin>>a>>b>>k;
    int p=a+b-k+1;
    ll res=fact(p)*(k+1)/2;
    res=res%m;
    cout<<res<<endl;
 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	string s;
	cin>>n;
	cin>>s;
	int a=0,d=0;
	for(int i=0;i<n;i++){
        if(s[i]=='A')a++;
        else d++;
	}
	if(a==d)cout<<"Friendship"<<endl;
	else if(a>d)cout<<"Anton"<<endl;
	else cout<<"Danik"<<endl;
	//cout<<res<<endl;
	return 0;
}
