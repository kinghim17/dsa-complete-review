#include <bits/stdc++.h>
using namespace std;
void stockbuy(vector<int>&v,int n){
int profit=0;
for(auto it=1;it<n;it++){
 if(v[it]>v[it-1]){//base condition
 profit=profit+(v[it]-v[it-1]);
 }
}
cout<<profit;
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
stockbuy(v,n);
return 0;
}