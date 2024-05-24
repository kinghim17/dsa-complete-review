#include<bits/stdc++.h>
using namespace std;
const int hima=256;
int fact(int n){
 int hell=1;//note if 0 is the case add another if statement
 for(int i=1;i<=n;i++){
 hell=hell*i;
 }
 return hell;
}
void lex(string &s1){
 int res=1;
 int n=s1.length();
 int mul=fact(n);
 int count[hima]={0};
 for(int i=0;i<n;i++){
 count[s1[i]]++;
 }
 for(int i=1;i<hima;i++){
 count[i]=count[i]+count[i-1];
 }
 for(int i=0;i<n-1;i++){
    mul=mul/(n-i);//for the spaces
    res=res+count[s1[i]-1]*mul;
    for(int j=s1[i];j<hima;j++){
    count[j]--;
    }
 }
 cout<<res<<endl;
}
int main(){
 string str1;
 cin>>str1;
 lex(str1);
}