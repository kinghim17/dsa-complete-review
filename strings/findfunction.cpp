#include <bits/stdc++.h>
using namespace std;
int main() {
string input="hello world";
string str;
getline(cin,str);
int index=input.find(str);
if(index==-1){
 cout<<"string not found"<<endl;
}
if(index!=-1){
 cout<<"first occ"<<index<<endl;
}
index=input.find(str,index+1);
if(index!=-1){
 cout<<"secomd occ"<<index<<endl;
}
}