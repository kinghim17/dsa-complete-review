//stl method
//--max element function
//pick the largest two from the end

//normal element
#include <bits/stdc++.h>
using namespace std;
void seclarg(vector<int>&v,int n){
 int res=-1,largest=0;
 for(auto it=1;it<v.size();it++){
 if(v[it]>v[largest]){
 res=largest;
 largest=it;
 }else if(v[it]!=v[largest]){
 if(res==-1 || v[res]>v[it] ){
 res=it;
 }
 }
 }
 cout<<"largest element"<<v[largest]<<endl;
 cout<<"second largest"<<v[res];
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
seclarg(v,n);
return 0;
}