#include<bits/stdc++.h>
using namespace std;
int fun(int m,int n){
 if(n==0){
    return 1;
}
else{
     return fun(m,n-1)*m;
 } 
return 0;
}
int main(){
    int x,y;
    cin>>x;
    cin>>y;
    cout<<fun(y,x);
}
