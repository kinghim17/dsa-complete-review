#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(vector<ll>&v){
 ll n=v.size();
 stack<ll>s;
 vector<ll>v2;
 reverse(v.begin(),v.end());
 s.push(v[0]);
 cout<<-1<<" ";
 for(ll i=1;i<n;i++){
 while(s.empty()==false && v[i]>=s.top()){
 s.pop();
 }
 int span=s.empty()?-1:s.top();

 v2.push_back(span);
 s.push(v[i]);
 }
 reverse(v2.begin(),v2.end());
 for(auto x:v2){
 cout<<x<<" ";
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
