//insert function norrmal
#include <bits/stdc++.h>
using namespace std;
void insert(vector<int>&v,int m,int p,int n){
 int pos=p-1;
 int start=n-1;
 v.resize(n+1);
 for(auto it=start;it>=pos;it--){
 v[it+1]=v[it];//shifting
 }
 v[pos]=m;
 for(auto it=v.begin();it<v.end();it++){
 cout<<*it;
 }
 cout<<endl;
 //another way of printing
 for(auto it=0;it<v.size();it++){
 cout<<v[it];//no pointers
 }
}
int main() {
int a,b,c,d,e,f,m,n,p;
cin>>m;//number to be inserted
cin>>p;//position to be inserted
cin>>n;//number of elements
vector<int>v;
int temp;
for(int i=0;i<n;i++){
 cin>>temp;
 v.push_back(temp);
}
insert(v,m,p,n);
return 0;
}



//stl method--part2

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
v.insert(v.begin()+1,3);
for(auto &value:v){
 cout<<value;
}
return 0;
}
