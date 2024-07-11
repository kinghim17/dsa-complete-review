#include<bits/stdc++.h>
using namespace std;

int fun(string str ,int start ,int end){
  if(start>=end){
      return true;
  }
  return(str[start]==str[end])&&fun(str,start+1,end-1);
 } 

int main(){
    int x,y;
    string str;
    cin>>str;
    int n=str.length();
    cout<<fun(str,0,n-1);
}
