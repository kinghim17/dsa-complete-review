//stl method

#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b,c,d,e,f,m,n,p;
cin>>n;//number of elements
vector<int>v;
int temp;
for(int i=0;i<n;i++){
 cin>>temp;
 v.push_back(temp);
}
vector<int>::iterator it1,it2;
it1=v.begin();
it2=v.end();
it2--;//defining the range
it2--;
v.erase(it1,it2);
for(auto &value:v){
 cout<<value;
}
return 0;
}

//normal method

#include <bits/stdc++.h>
using namespace std;
int sea(vector<int>&v,int m){
 int begin=0;
 vector<int>::iterator it;
 for(it=v.begin();it!=v.end();it++){
 if(*it==m){
 return begin;
 exit(0);
 }
 begin++;
 }
 return 0;
 }
 void del(vector<int>&v,int m,int n){
 auto it=find(v.begin(),v.end(),m);
 if(it!=v.end()){
 cout<<"element found to be deleted"<<endl;
 }
 else{
 cout<<"not found";
 exit(0);
 }
 int j=sea(v,m);
 for(auto it=j;it!=n-1;it++){
 v[it]=v[it+1];
 }
 v.resize(n-1);
 for(auto &value:v){
 cout<<value;
 }
}
int main() {
int a,b,c,d,e,f,m,n,p;
cin>>m;//element to be deleted
cin>>n;//number of elements
vector<int>v;
int temp;
for(int i=0;i<n;i++){
 cin>>temp;
 v.push_back(temp);
}
del(v,m,n);
return 0;
}