#include<bits/stdc++.h>
using namespace std;
int main(){
 unordered_map<string,int>m;
 int n,z,y;
 string x,o;
 cin>>n;
 for(int i=0;i<n;i++){
 cin>>x>>y;
 m.insert({x,y});
 }
 for(auto i:m){
 cout<<i.first<<" "<<i.second;
 }
 cout<<endl;//first method printing
 for(auto it=m.begin();it!=m.end();it++){
 cout<<(it->first)<<" "<<(it->second);
 }
 cout<<endl;//second printing method
 cin>>o;
 auto it=m.find(o);
 if(it!=m.end())
 cout<<(it->second);//find function

 if(m.count(o)>0)
 cout<<"Found";
 else
 cout<<"Not Found";
 cout<<endl;
 cout<<m.size();//size of the function

 auto it2=m.find("o");
 m.erase(it2);//erase a part of it
 cout<<m.size();
 m.erase(m.begin(),m.end());//erase all

}