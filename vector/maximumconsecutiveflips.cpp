#include <bits/stdc++.h>
using namespace std;
void maxflips(vector<int>&v,int n){
 for(auto i=1;i<n;i++){
 if(v[i-1]!=v[i]){
 if(v[i]!=v[0]){//first condition
 cout<<"from"<<i;
 }else{
 cout<<i-1<<endl;
 }
 if(v[n-1]!=v[0]){
 cout<<n-1<<endl;//end condition
 }
 }
 }
}
int main() {
int a,b,c,d,e,f,m,n,p,k;
cin>>n;//number of elements
vector<int>v;
int temp;
for(int i=0;i<n;i++){
 cin>>temp;
 v.push_back(temp);
}
maxflips(v,n);
return 0;
}