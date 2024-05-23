#include <bits/stdc++.h>
using namespace std;
void givensum(vector<int>&v,int n,int sum){
 int curr=0,start=0;
for(int i=0;i<n;i++){
 curr=curr+v[i];
 while(sum<curr){
 curr=curr-v[start];
 start++;
 }
 if(curr==sum){
 cout<<sum<<" "<<"thus found";
 exit(0);
 }
}
cout<<"not found";
}
int main() {
int a,b,c,d,e,f,m,n,p,k,sum;
cin>>n;//number of elements
cin>>sum;//sum of the element you want
vector<int>v;
int temp;
for(int i=0;i<n;i++){
 cin>>temp;
 v.push_back(temp);
}
givensum(v,n,sum);
return 0;
}