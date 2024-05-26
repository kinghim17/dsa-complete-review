#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(string &s){
 int n=s.length();
 int total=(1<<n);
 for(ll i=0;i<total;i++){
 for(ll j=0;j<n;j++){
 if((i&(1<<j))!=0){
 cout<<s[j];
 }
 }
 cout<<endl;
 }
}
int main(){
 string s;
 cin>>s;
 solve(s);
}