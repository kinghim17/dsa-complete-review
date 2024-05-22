//naive
#include <bits/stdc++.h>
using namespace std;
void leader(vector<int>&v,int n){
 for(auto it=0;it<n;it++){
 bool flag=false;
 for(int j=it+1;j<n;j++){
 if(v[it]<v[j]){
 flag= true;
 break;
 }
 }
 if(flag==false){//remember double=
 cout<<v[it];
 }
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
leader(v,n);
return 0;
}

//pro 
#include <bits/stdc++.h>
using namespace std;
void leader(vector<int>&v,int n){
 int curr=n-1;
 cout<<v[curr];
 for(auto it=n-2;it>=0;it--){
 if(v[it]>v[curr]){
 cout<<v[it];
 curr=it;
 }
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
leader(v,n);
return 0;
}
