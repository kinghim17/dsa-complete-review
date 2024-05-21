#include <bits/stdc++.h>
using namespace std;
void removedupli(vector<int>&v,int n){
 int count=0,res=1;
 sort(v.begin(),v.end());
 for(auto &value:v){
 cout<<value;
 }
 cout<<endl;
 for(auto it=1;it<n;it++){
 if(v[res-1]!=v[it]){
 v[res]=v[it];
 res++;
 }
 }
 for(auto it=0;it<res;it++){
 cout<<v[it];
}
}
int main() {
int a,b,c,d,e,f,m,n,p;
cin>>n;//number of elements
vector<int>v;
int temp;
for(int i=0;i<n;i++){
 cin>>temp;
 v.push_back(temp);
}
removedupli(v,n);
return 0;
}