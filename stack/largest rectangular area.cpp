//naive
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int solve(vector<ll>&arr){
 ll n=arr.size();
 int res=0;
 int ps[n],ns[n];

 stack<int>s;
 s.push(0);
 for(int i=0;i<n;i++){
 while(s.empty()==false &&arr[s.top()]>=arr[i])
 s.pop();
 int pse=s.empty()?-1:s.top();
 ps[i]=pse;
 s.push(i);
 }

 while(s.empty()==false){
 s.pop();
 }

 s.push(n-1);
 for(int i=n-1;i>0;i--){
 while(s.empty()==false && arr[s.top()]>=arr[i])
 s.pop();
 int nse=s.empty()?n:s.top();
 ns[i]=nse;
 s.push(i);
 }

 for(int i=0;i<n;i++){
 int curr=arr[i];
 curr+=(i-ps[i]-1)*arr[i];
 curr+=(ns[i]-i-1)*arr[i];
 res=max(res,curr);
 }
 return res;
}
int main(){
 vector<ll>v;
 ll n,m,temp;
 cin>>n;
 for(ll i=0;i<n;i++){
 cin>>temp;
 v.push_back(temp);
 }
 cout<<solve(v);

}
//pro
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int solve(vector<ll>&arr){
 ll n=arr.size();
 stack <int>s;
 int res=0;
 int tp;
 int curr;
 for(int i=0;i<n;i++){
 while(s.empty()==false && arr[s.top()]>=arr[i]){
 tp=s.top();
 s.pop();
 curr=arr[tp]*(s.empty()?i : i-s.top()-1);
 res=max(res,curr);
 }
 s.push(i);
 }
 while(s.empty()==false){
 tp=s.top();
 s.pop();
 curr=arr[tp]*(s.empty() ? n : n-s.top()-1);
 res=max(res,curr);
 }

 return res;
}
int main(){
 vector<ll>v;
 ll n,m,temp;
 cin>>n;
 for(ll i=0;i<n;i++){
 cin>>temp;
 v.push_back(temp);
 }
 cout<<solve(v);
}
