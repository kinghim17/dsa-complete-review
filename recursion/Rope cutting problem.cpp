#include<bits/stdc++.h>
using namespace std;
int fun(int n,int a,int b,int c){
 if(n==0){
     return 0;
 }
 if(n<0){
     return -1;
 }
 int res = max(fun(n-a, a, b, c),max(fun(n-b, a, b, c),fun(n-c, a, b, c)));
 if(res==-1){
 return -1;//corner case
 }
 return res+1;
 } 

int main(){
    int x,y,z,a,b,c;
    cin>>x;
    cin>>a>>b>>c;
    cout<<fun(x,a,b,c);
}
