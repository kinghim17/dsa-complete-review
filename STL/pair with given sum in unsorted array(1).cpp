#include<bits/stdc++.h>
using namespace std;
bool givensum(vector<int>&arr,int n,int m) {
 int sum=m;
 unordered_set<int> us;
 for(int i = 0; i < n; i++){
 if(us.find(sum-arr[i])!=us.end()){
 return true;
 }else{
us.insert(arr[i]);
}
}
return false;
}
int main(){
 int a,b,c,m,n;
 cin>>n;
 cin>>m;//given sum
 int temp;
 vector<int>v1;
 vector<int>v2;
 for(int i=0;i<n;i++){
 cin>>temp;
 v1.push_back(temp);
 }

 cout<<givensum;
}