//kadanes algo
#include <bits/stdc++.h>
using namespace std;
void eveodd(vector<int>&v,int n){
 int res=1;
 int count=1;
 for(int j=1;j<n;j++){
 if((v[j]%2==0 && v[j-1]%2!=0) ||(v[j-1]%2==0
&& v[j]%2!=0)){
 count++;
 res=max(res,count);
 }else{
 count=1;
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
eveodd(v,n);
return 0;
}
