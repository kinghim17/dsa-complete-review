#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(vector<ll>&v){
 ll n=v.size();
 stack<ll>s;
 s.push(0);
 cout<<1<<" ";
 for(ll i=1;i<n;i++){
 while(s.empty()==false && v[i]>=v[s.top()]){
 s.pop();
 }
 int span=s.empty()?i+1:i-s.top();
 cout<<span<<" ";
 s.push(i);
 }
}
int main(){
 vector<ll>v;
 ll n,m,temp;
 cin>>n;
 for(ll i=0;i<n;i++){
 cin>>temp;
 v.push_back(temp);
 }
 solve(v);

}