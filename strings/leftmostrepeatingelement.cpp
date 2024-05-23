//naive
#include<bits/stdc++.h>
using namespace std;
void leftmost(string &s1){
 for(int i=0;i<s1.length();i++){
 for(int j=i+1;j<s1.length();j++){
 if(s1[i]==s1[j]){
 cout<<s1[i]<<endl;
 exit(0);
 }
 }
 }
}
int main(){
 string str;
 cin>>str;
 leftmost(str);
}
//pro
#include<bits/stdc++.h>
using namespace std;
const int hellu=256;
 void left(string &s1){
 int m=s1.length();
 int arr[hellu];
 fill(arr,arr+hellu,-1);//fill function
 for(int i=0;i<m;i++){
 int fi=arr[s1[i]];
 if(fi==-1){
 arr[s1[i]]=i;
 }else{
 cout<<fi<<s1[fi];//note the characterarray
 exit(0);
 }
 }
 }
int main(){
 string str1;
 cin>>str1;
 left(str1);
}