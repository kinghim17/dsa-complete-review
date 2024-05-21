#include <bits/stdc++.h>
using namespace std;
void moveto(vector<int>&v,int n){
 int temp=v[0];
 for(auto it=1;it<n;it++){
 v[it-1]=v[it];
 }
 v[n-1]=temp;
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