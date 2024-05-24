#include<bits/stdc++.h>
#define ll long long
using namepsace std;
void solve(string &s1){
    ll i=0;
    ll res=0;
    ll maxend;
    ll n=s1.length();
    vector<ll>v(256,-1);
    for(j=0;j<n;j++){
        i=max(i,v[s[j]]+1);
        maxend=i+j-1;
        res=max(res,maxend);
        v[s[j]]=j;
    }
    cout<<res
}
int main(){
    string s1,s2,s3;
    cin>>s1;
    solve(s1);
}