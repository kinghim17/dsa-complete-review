#include<bits/stdc++.h>
using namespace std;
int fun(int n){
 static int s=1;
 if(n<=9){//n==0 the return 0
    return n;
}

return fun(n/10)+n%10;
 } 

int main(){
    int x,y;
    cin>>x;
    cout<<fun(x);
}
