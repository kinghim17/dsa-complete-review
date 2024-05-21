#include <bits/stdc++.h>
using namespace std;
void bubble(vector<int>&v,int n){
 for(int i=0;i<n-1;i++){
 for(int j=0;j<n-i-1;j++){
 if(v[j]>v[j+1]){
 swap(v[j],v[j+1]);
 }
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
bubble(v,n);
return 0;
}
