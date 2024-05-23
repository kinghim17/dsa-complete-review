#include <bits/stdc++.h>
using namespace std;
void prefixsum(vector<int>&v,int n,int a,int b){
 for(auto i=1;i<n;i++){
 v[i]=v[i]+v[i-1];
 } //preprocessing the thing
 for(auto it=v.begin();it!=v.end();it++){
 cout<<*it;
 }
 cout<<endl;
if(b==0){
 cout<<v[a];
 }else{
 cout<<v[a]-v[b-1];
 }

}
int main() {
int a,b,c,d,e,f,m,n,p,k,sum;
cin>>n;//number of elements
cin>>a>>b;//range of sum
vector<int>v;
int temp;
for(int i=0;i<n;i++){
 cin>>temp;
 v.push_back(temp);
}
prefixsum(v,n,a,b);
return 0;
}