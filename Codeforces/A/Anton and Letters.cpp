#include <bits/stdc++.h>
#define pb push_back
//#define int long long int
#define ll long long int
using namespace std;
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<char,int>m;
    string s;
    int ans=0;
    //cin>>s;
    getline(cin,s);
    //cout<<s.size()<<endl;
    for(int i=0;i<s.size();i++){
            //cin>>x;
        m[s[i]]++;
    }
    for(auto const &i :m){
        if(i.first>='a' && i.first<='z') ans++;//cout<<"y";
    }
    cout<<ans;
 
 
	return 0;
}
