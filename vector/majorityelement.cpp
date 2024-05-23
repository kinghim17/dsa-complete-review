//moores voting algorithm
#include <bits/stdc++.h>
using namespace std;
void majelement(vector<int>&v,int n){
 int res=0,cur=1;
 for(auto i=1;i<n;i++){
 if(v[res]=v[i]){
 cur++;
 }else{
 cur--;
 }
 if(cur==0){
 cur=1;
 res=i;
 }
 }
 cur=0;
 for(int i=0;i<n;i++){
 if(v[res]==v[i]){//remember the ==
 cur++;
 }
 }
 if(cur>n/2){
 cout<<v[res]<<"majority element"<<endl;
 }else{
 cout<<"no majority found";
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
majelement(v,n);
return 0;
}