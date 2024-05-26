//int
#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<vector<ll>> subsets(vector<ll>& nums){
 int n=nums.size();
 ll temp;
 int size=(1<<n);
 vector<vector<ll>>subsets;
 for(ll i=0;i<size;i++){
 vector<ll>subset;
 for(ll j =0;j<n;j++){
 if((i&(1<<j))!=0){//bracket imp
 temp=nums[j];
 subset.push_back(temp);
 }
 }
 subsets.push_back(subset);
 }
 return subsets;
}
int main(){
 ll m,temp;
 cin>>m;
 vector<ll>v;
 for(ll i=0;i<m;i++){
 cin>>temp;
 v.push_back(temp);
 }
 auto allsubs = subsets(v);
 for(auto ele : allsubs){
 for(ll hell : ele){
 cout<<hell<<" ";
 }
 cout<<endl;
 }

}
//string
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(vector<string>&v){
 ll n=v.size();
 ll size=(1<<n);
 for(ll i=0;i<size;i++){
 vector<string>h;
 for(ll j=0;j<n;j++){
 if((i&(1<<j))!=0){
 h.push_back(v[j]);
 }
 }
 for (const string& element : h) {
 cout << element << " ";
 }
 cout<<endl;
 }

}
int main(){
 ll m,temp;
 string s;
 vector<string>v;
 cin>>s;
 for(ll i=0;i<s.length();i++){
 string temp;
 //converting char into string
 temp=temp+s[i];
 v.push_back(temp);
 }
 solve(v);

}