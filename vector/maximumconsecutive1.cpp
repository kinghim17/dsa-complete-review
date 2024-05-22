
#include <bits/stdc++.h>
using namespace std;
void maxcon(vector<int>&v,int n){
int count=0,res=0;
for(auto it=0;it<n;it++){
 if(v[it]==1){
 count=count+1;
 res=max(res,count);
 }else{
 count=0;
 }
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
maxcon(v,n);
return 0;
}