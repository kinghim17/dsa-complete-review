#include<bits/stdc++.h>
using namespace std;
int main(){
 unordered_set<int>s;
 int n,x,m,z;
 cin>>n;
 for(int i=0;i<n;i++){
 cin>>x;
 s.insert(x);
 }
 for(auto i:s){
 cout<<i;
 }
 cout<<endl;//first method printing
 for(auto it=s.begin();it!=s.end();it++){
 cout<<*it;
 }
 cout<<endl;//second printing method
 cin>>m;
 if(s.find(m)==s.end())//find function
 cout<<"Not Found";
 else
 cout<<"Found "<<(*s.find(m));
 if(s.count(m))//count function
 cout<<"Found";
 else
 cout<<"Not Found";
 cout<<endl;
 cout<<s.size();//size of the function

 auto it=s.find(m);
 s.erase(it);//erase a part of it
 cout<<s.size();
 s.erase(s.begin(),s.end());//erase all

}