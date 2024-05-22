//naive
#include <bits/stdc++.h>
using namespace std;
void trapping(vector<int>&v,int n){
 int res=0;
 for(auto i=1;i<n-1;i++){
 int lmax=v[i];
 for(auto j=0;j<i;j++){
 lmax=max(lmax,v[j]);
 }
 int rmax=v[i];
 for(auto j=i+1;j<n;j++){
 rmax=max(rmax,v[j]);
 }
 res=res+min(lmax,rmax)-v[i];
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
trapping(v,n);
return 0;
}
//pro
#include <bits/stdc++.h>
using namespace std;
void trapping(vector<int>&v,int n){
 int lmax[n],rmax[n],res;
 lmax[0]=v[0];
 for(int i=1;i<n;i++){
 lmax[i]=max(v[i],lmax[i-1]);
 }
 rmax[0]=v[n-1];
 for(int i=n-2;i>=0;i--){
 rmax[i]=max(v[i],rmax[i+1]);
 }
 for(int i=1;i<n-1;i++){
 res=res+(min(lmax[i],rmax[i])-v[i]);
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
trapping(v,n);
return 0;
}