//stl method
//reverse function
//pick the largest two from the end

//normal element
#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int>&v,int n){
 int high=n-1;
 int low=0;
 int temp;
 while(low<high){
 temp=v[low];
 v[low]=v[high];
 v[high]=temp;
 high--;
 low++;
 }
 for(auto it=0;it<n;it++){
 cout<<v[it];
 }
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
reverse(v,n);
return 0;
}