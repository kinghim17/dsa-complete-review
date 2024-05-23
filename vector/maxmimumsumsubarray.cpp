//naive
#include <bits/stdc++.h>
using namespace std;
void maxsum(vector<int>&v,int n){
int res=v[0];
for(auto it=0;it<n;it++){
 int curr=0;
 for(int j=it;j<n;j++){
 curr=curr+v[it];
 res=max(res,curr);

 }
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
maxsum(v,n);
return 0;
}

//pro
#include <bits/stdc++.h>
using namespace std;
void maxsum(vector<int>&v,int n){
int res=v[0];
for(auto it=0;it<n;it++){
 int curr=0;
 for(int j=it;j<n;j++){
 curr=curr+v[it];
 res=max(res,curr);
 }
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
maxsum(v,n);
return 0;
}