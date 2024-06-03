#include<bits/stdc++.h>
using namespace std;
void
intersection(vector<int>&arr1,vector<int>&arr2,int n,int m) {
 int sum=m;
 unordered_set<int>us(arr1.begin(),arr1.end());
 for(int i = 0; i < m; i++){
 if(us.find(arr2[i])!=us.end()){
 cout<<arr2[i];
 }


}
}
int main(){
 int a,b,c,m,n;
 cin>>n;
 cin>>m;//given sum
 int temp,temp2;
 vector<int>v1;
 vector<int>v2;
 for(int i=0;i<n;i++){
 cin>>temp;
 v1.push_back(temp);
 }
 for(int i=0;i<m;i++){
 cin>>temp2;
 v2.push_back(temp2);
 }

 intersection(v1,v2,n,m);
}