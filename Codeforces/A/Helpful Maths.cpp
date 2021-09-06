#include <bits/stdc++.h>
#define pb push_back
//#define int long long int
#define ll long long int
using namespace std;
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector <int>v;
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]!='+'){
            v.pb(int(s[i])-'0');
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i];
        if(i!=v.size()-1) cout<<"+";
    }
 
 
	return 0;
}
