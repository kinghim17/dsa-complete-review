#include<bits/stdc++.h>
using namespace std;
void rotations(string &s1,string &s2){
 int m=s1.length();
 int n=s2.length();
 if(m!=n){
 cout<<"not a rotation"<<endl;
 exit(0);
 }
 string s3=s1+s2;
 int s5=s3.find(s2);
 if(s5==-1){
 cout<<"not a rotation"<<endl;
 }
 if(s5!=-1){
 cout<<"string is a rotation"<<endl;
 }

}
int main(){
 string str1,str2;
 cin>>str1>>str2;
 rotations(str1,str2);
}