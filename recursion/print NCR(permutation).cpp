#include<bits/stdc++.h>
using namespace std;

int fun(int n,int r){
   if(r==0 || n==r){
       return 1;
   }
   
    return fun(n-1,r-1)+fun(n-1,r);
 } 

int main(){
    int x,y;
    cin>>x;
    cin>>y;
    cout<<fun(x,y);
}
