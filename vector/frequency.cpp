#include <bits/stdc++.h>
using namespace std;
void freq(vector<int>&v,int n){
 sort(v.begin(),v.end());
 for(auto &value:v){
 cout<<value;
 }
 cout<<endl;
 int count=1;
 for(auto it=1;it<n;it++){
 if(v[it]==v[it-1]){
 count++;

 }else{
 cout<<count<<" "<<v[it-1];
 cout<<endl;
 count=1;

 }
 }//last element pending(guess why)
 cout<<v[n-1]<<count;
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
freq(v,n);
return 0;
}
