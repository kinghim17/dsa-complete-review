#include<bits/stdc++.h>
using namespace std;
int unionsize(vector<int>&arr1,vector<int>&arr2,int m,int n) {
 unordered_set<int> us;
 for(int i = 0; i < m; i++)
 us.insert(arr1[i]);
 for(int i = 0; i < n; i++)
 us.insert(arr2[i]);

 return us.size();
}
int main(){
 int a,b,c,m,n;
 cin>>n;
 cin>>m;
 int temp;
 vector<int>v1;
 vector<int>v2;
 for(int i=0;i<n;i++){
 cin>>temp;
 v1.push_back(temp);
 }
 for(int i=0;i<m;i++){
 cin>>temp;
 v2.push_back(temp);
 }
 cout<<unionsize(v1,v2,n,m);
}
