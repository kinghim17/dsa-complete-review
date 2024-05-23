//naive
#include <bits/stdc++.h>
using namespace std;
void maxcircle(vector<int>&v,int n){
 int res=v[0];
 for(auto it=0;it<n;it++){
 int curmax=v[it];
 int cursum=v[it];
 for(auto vt=1;vt<n;vt++){
 int idx=(it+vt)%n;
 cursum=cursum+v[idx];
 curmax=max(curmax,cursum);
 }
 res=max(res,curmax);
 }
 cout<<res;
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
maxcircle(v,n);
return 0;
}
//pro

#include <bits/stdc++.h>
using namespace std;
int normalsum(vector<int>&v,int n){
 int maxending=v[0],res=v[0];
 for(auto i=1;i<n;i++){
 maxending=max(maxending+v[i],v[i]);
 res=max(res,maxending);
 }
 return res;
}
void maxcircle(vector<int>&v,int n){
int maxnormal=normalsum(v,n);
int sum=0;
if(maxnormal<0){
 cout<<maxnormal;
 exit(0);
}
for(auto i=0;i<n;i++){
 sum=sum+v[i];
 v[i]=-v[i];//inverting the elments
}
int maxcircle=sum+normalsum(v,n);
int p=max(maxcircle,maxnormal);
cout<<p;
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
maxcircle(v,n);
return 0;
}