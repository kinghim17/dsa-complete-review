#include <bits/stdc++.h>
using namespace std;
void moveto(vector<int>&v,int n){
 int count=0;
 for(auto it=0;it<n;it++){
 if(v[it]!=0){
 swap(v[it],v[count]);
 count++;
 }
 }
 for(auto &value:v){
 cout<<value;
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
moveto(v,n);
return 0;
}