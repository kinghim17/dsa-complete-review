#include<bits/stdc++.h>
using namespace std;
void fun(string s,string curr,int index){
  if(index==s.length()){
      cout<<curr;
      return;
  }
  fun(s,curr,index+1);//part1 recursive
  fun(s,curr+s[index],index+1);//part2 recursive
  
 } 

int main(){
    string s;
    cin>>s;
    fun(s,"",0);
}

