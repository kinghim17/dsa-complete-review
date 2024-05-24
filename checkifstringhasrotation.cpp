#include<bits/stdc++.h>
using namespace std;
const int hima=256;
bool anag(string &s1,string &s2,int i){
 int arr[hima]={0};
 int y=s2.length();
 for(int j=0;j<y;j++){
 arr[s2[j]]++;
 arr[s1[i+j]]--;
 }
 for(int j=0;j<hima;j++){
 if(arr[j]!=0){
 return false;
 }
 }
 return true;
}
void anag(string &s1,string &s2){
 int m=s1.length();
 int n=s2.length();
 int x=m-n;
 for(int i=0;i<x;i++){
 if(anag(s1,s2,i)){
 cout<<"yes its in the anagram in the search"<<endl;
 exit(0);
 }
 }
 cout<<"its not "<<endl;
 }
int main(){
 string str1,str2;
 cin>>str1>>str2;
 anag(str1,str2);
}