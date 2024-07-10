#include<bits/stdc++.h>
using namespace std;
int fun(int m,int n){
  static int r,p=1,f=1;//static because they retain there values during calls
 if(n==0){
    return 1;
}

     r=fun(m,n-1);
     p=p*m;
     f=f*n;
     
     return r+p/f;
}
int main(){
    int x,y;
    cin>>x;
    cin>>y;
    cout<<fun(y,x);
}
//horners rule

#include<bits/stdc++.h>
using namespace std;
int fun(int m,int n){
 static int s=1;
 if(n==0){
    return s;
}
s=1+m/n*s;
return fun(m,n-1);
 } 

int main(){
    int x,y;
    cin>>x;
    cin>>y;
    cout<<fun(x,y);
}
