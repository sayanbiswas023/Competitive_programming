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
	
	int ans=0;
	string s;

	int a[4]={0};
	cin>>a[0]>>a[1]>>a[2]>>a[3];
	cin>>s;
	for(int i=0;i<s.size();i++){
        ans+=(a[s[i]-'1']);
	}
 
	cout<<ans<<endl;
 
	
	return 0;
}
