#include <bits/stdc++.h>
using namespace std;
void maxval(vector<int>&v,int n){
 int mini=v[0];
 int res=v[1]-v[0];
 for(auto it=1;it<n;it++){
 res=max(res,v[it]-mini);
 mini=min(mini,v[it]);
 }
 cout<<res;
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
maxval(v,n);
return 0;
}