#include<bits/stdc++.h>
using namespace std;
int sumi(vector<int>&arr,int n,int sum) {
 unordered_set<int>s;
 int pre_sum = 0;
 for(int i= 0; i<n; i++){
 pre_sum += arr[i];
 if(pre_sum==sum)
 return true;
 if(s.find(pre_sum-sum) != s.end())
 return true;
 s.insert(pre_sum);
 }
 return false;
}
int main(){
 int a,b,c,m,n,sum;
 cin>>n;
 cin>>m;
 cin>>sum;
 int temp;
 vector<int>v1;
 vector<int>v2;
 for(int i=0;i<n;i++){
 cin>>temp;
 v1.push_back(temp);
 }

 cout<<sumi(v1,n,sum);
}