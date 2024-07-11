#include<bits/stdc++.h>
using namespace std;
int fun(vector<int>v,int n,int sum){
if(n==0){
    return (sum==0)?1:0;//how it stores all values
}
 return fun(v,n-1,sum)+fun(v,n-1,sum-v[n-1]);
 
 } 

int main(){
   int i,n,k,temp;
   cin>>n>>k;
   vector<int>v;
   for(int i=0;i<n;i++){
       cin>>temp;
       v.push_back(temp);
   }
   
   cout<<fun(v,n,k);
}
