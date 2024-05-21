//stl method
//--max element function

//normal element
#include <bits/stdc++.h>
using namespace std;
void largest(vector<int>&v,int n){
 int res=0;
 for(auto it=0;it<n;it++){
 if(v[it]>v[res]){
 res=it;
 }
 }
 cout<<"largest"<<v[res];
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
largest(v,n);
return 0;
}