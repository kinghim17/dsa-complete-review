#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&v){
 unordered_set<int>s(v.begin(),v.end());
 int res=0;
 for(int i=0;i<v.size();i++){
 if(s.find(v[i]-1)==s.end()){
 int count=1;
 while(s.find(v[i]+count)!=s.end()){
 count++;
 res=max(res,count);
 }
 }
 }
 cout<<res;

}
int main(){
 int temp1,temp2,n;
 cin>>n;
 vector<int>v;
 for(int i=0;i<n;i++){
 cin>>temp1;
 v.push_back(temp1);
 }
 solve(v);
}