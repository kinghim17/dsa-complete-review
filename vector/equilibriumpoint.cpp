
#include <bits/stdc++.h>
using namespace std;
void equili(vector<int>&v,int n){
 int res=0;
 for(auto i=0;i<n;i++){
 res=res+v[i];
 }
 int sum=0;
 for(auto i=0;i<n;i++){
 res=res-v[i];
 if(sum==res){
 cout<<"sum found"<<sum;
 exit(0);
 }
 sum=sum+v[i];
 }

}
int main() {
int a,b,c,d,e,f,m,n,p,k,sum;
cin>>n;//number of elements
vector<int>v;
int temp;
for(int i=0;i<n;i++){
 cin>>temp;
 v.push_back(temp);
}
equili(v,n);
return 0;
}