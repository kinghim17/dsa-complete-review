#include <bits/stdc++.h>
using namespace std;
bool pal(string &str){
 int begin=0;
 int end=str.length()-1;
 while(begin<end){
 if(str[begin]!=str[end]){
 return false;
 }
 begin++;
 end--;
 }
 return true;
 }
int main(){
 string str;
cin>>str;
 bool palindrome=pal(str);
 if(palindrome==1){
 cout<<"yes its a palindrome"<<endl;
 }else{
 cout<<"no"<<endl;
 }
 }