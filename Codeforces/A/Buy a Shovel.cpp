#include <bits/stdc++.h>
#define pb push_back
//#define int long long int
#define ll long long int
using namespace std;
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int p,r;
    cin>>p>>r;
    int i=1;
    while(1){
        if(((p*i-r)%10==0) || p*i %10 ==0)break;
        i++;
    }
    cout<<i<<endl;
 
	return 0;
}
