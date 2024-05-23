//this is a sliding window technqiue
#include <bits/stdc++.h>
using namespace std;
void slidingwindow(vector<int>&v,int n,int k){
int curr=0;
for(auto i=0;i<k;i++){
 curr=curr+v[i];
 }//precomputing the kth elements
//now we slide the elements in as per and find
int res =curr;
for(auto i=k;i<n;i++){
 curr=curr+v[i]-v[i-k];
 res=max(res,curr);
}
cout<<res;
}
int main() {
int a,b,c,d,e,f,m,n,p,k;
cin>>n;//number of elements
cin>>k;//number of elements for sum
vector<int>v;
int temp;
for(int i=0;i<n;i++){
 cin>>temp;
 v.push_back(temp);
}
slidingwindow(v,n,k);
return 0;
}