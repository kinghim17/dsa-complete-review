#include <bits/stdc++.h>
using namespace std;
bool sub(string &s1,string &s2){
 int m=s1.length();
 int n=s2.length();
 int j=0;
 for(int i=0;i<m && j<n;i++){//note two conditons possible
 if(s1[i]==s2[j]){
 j++;
 }
 }
 return(j==n);
}
int main(){
 string str1,str2;
 cin>>str1>>str2;
 bool flag=sub(str1,str2);
 if(flag==1){
 cout<<"yes";
 }else{
 cout<<"no";
 }
}