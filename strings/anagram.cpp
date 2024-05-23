//naive
#include <bits/stdc++.h>
using namespace std;
bool ana(string &s1,string &s2){
 int m=s1.length();
 int n=s2.length();
 if(m!=n){
 return false;
 }
 sort(s1.begin(),s1.end());
 sort(s2.begin(),s2.end());
 return(s1==s2);
}
int main(){
 string str1,str2;
 cin>>str1>>str2;
 bool flag=ana(str1,str2);
 if(flag==1){
 cout<<"yes";
 }else{
 cout<<"no";
 }
}
//pro(hashing method)
#include <bits/stdc++.h>
using namespace std;
const int hellu=256;
bool ana(string &s1,string &s2){
 int m=s1.length();
 int n=s2.length();
 if(m!=n){
 return false;
 }
 int count[hellu]={0};
 for(int i=0;i<m;i++){
 count[s1[i]]++;
 count[s2[i]]--;
 }
 for(int i=0;i<hellu;i++){
 if(count[i]!=0){
 return false;
 }
 }
 return true;
}
int main(){
 string str1,str2;
 cin>>str1>>str2;
 bool flag=ana(str1,str2);
 if(flag==1){
 cout<<"yes";
 }else{
 cout<<"no";
 }
}
