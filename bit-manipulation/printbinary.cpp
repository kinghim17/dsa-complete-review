#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(ll m){
 for(ll i=10;i>=0;i--){
 cout<<((m<<i)&1);
 }
 cout<<endl;
}
int main(){
 ll n,m;
 cin>>m;
 solve(m);
}