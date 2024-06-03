#include<bits/stdc++.h>
using namespace std;
int sumi(vector<int>&arr,int n,int sum) {
 int prefix_sum = 0, res = 0;
 unordered_map<int, int> m;
 for(int i = 0; i < n; i++) {
 prefix_sum += arr[i];
 if(prefix_sum == sum)
 res = i + 1;
 if(m.find(prefix_sum) == m.end())
 m.insert({prefix_sum, i});
 if(m.find(prefix_sum - sum) != m.end())
 res = max(res, i-m[prefix_sum-sum]);
 }
 return res;
 }
int main(){
 int a,b,c,m,n,sum;
 cin>>n;
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