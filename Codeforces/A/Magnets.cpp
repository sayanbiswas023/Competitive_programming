#include <bits/stdc++.h>
#define pb push_back
//#define int long long int
#define ll long long int
using namespace std;
 
int n;
int solve(){
    cin>>n;
    int x;
    int one=0,two=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==1)one++;
        else two++;
    }
    if(one%2==0){
        if(one==0 && two %2!=0) return 0;
        else return 1;
    }
    else{
        return 0;
    }
 
 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	//string s;
	cin>>n;
	//cin>>s;
	//int x=0;
	//int a=0,b=0;
	//int a[n];
	int ans=1;
	string s;
	string a;
	//cin>>s;
	//a=s;
	for(int i=0;i<n;i++){
 
        if(i==0){
            cin>>s;
            a=s;
        }
        else{
            cin>>s;
            if(s!=a)ans++;
        a=s;
        }
 
	}
	cout<<ans<<endl;
 
	//cout<<abs(b-2)+abs(a-2)<<endl;
 
	//cout<<x;
	return 0;
}
