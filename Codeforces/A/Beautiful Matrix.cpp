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
	int t;
	//string s;
	//cin>>t;
	//cin>>s;
	//int x=0;
	int a=0,b=0;
	int p[5][5];
	for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>p[i][j];
            if(p[i][j]==1){
                a=i;
                b=j;
            }
        }
	}
	cout<<abs(b-2)+abs(a-2)<<endl;
 
	//cout<<x;
	return 0;
}
