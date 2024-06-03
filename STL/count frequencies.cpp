#include<bits/stdc++.h>
using namespace std;
void countFreq(vector<int>&v, int n){
 unordered_map<int,int>h;
 for(int i=0;i<n;i++){
 h[v[i]]++;
 }
 for(auto i:h){
 cout<<i.first<<" "<<i.second;
 }
}
int main(){
 int a,b,c,m,n;
 cin>>n;
 int temp;
 vector<int>v;
 for(int i=0;i<n;i++){
 cin>>temp;
 v.push_back(temp);
 }
 countFreq(v,n);
}
