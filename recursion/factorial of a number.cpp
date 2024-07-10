#include<bits/stdc++.h>
using namespace std;
int fun(int n){
 if(n==0){
return 1;
}
     return fun(n-1)*n;//adding the previous case

}
int main(){
    int x;
    cin>>x;
    cout<<fun(x);
}
