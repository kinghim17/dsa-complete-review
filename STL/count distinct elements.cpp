#include<bits/stdc++.h>
using namespace std;
int countDistinct(vector<int>arr, int n){
 unordered_set<int> us;
 for(int i = 0; i < n; i++)
 us.insert(arr[i]);

 return us.size();
}
int main(){
 int a,b,c,m,n;
 cin>>n;
 int temp;
 vector<int>v;
 for(int i=0;i<n;i++){
 cin>>temp;
 v.push_back(temp);
 }
 cout<<countDistinct(v,n);
}