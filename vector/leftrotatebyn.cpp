#include <bits/stdc++.h>
using namespace std;
void movetod(vector<int>&v,int n,int d){
 vector<int>v2(d);
 for(auto it=0;it<d;it++){
 v2[it]=v[it];
 }

 for(auto it=d;it<n;it++){
 v[it-d]=v[it];
 }
 for(auto it=0;it<d;it++){
 v[n-d+it]=v2[it];
 }

 for(auto &value:v){
 cout<<value;
 }

}
int main() {
int a,b,c,d,e,f,m,n,p;
cin>>d;//d positions moved
cin>>n;//number of elements
vector<int>v;
int temp;
for(int i=0;i<n;i++){
 cin>>temp;
 v.push_back(temp);
}
movetod(v,n,d);
return 0;
}