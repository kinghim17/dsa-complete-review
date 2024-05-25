#include <bits/stdc++.h>
using namespace std;
void power(int n){
if(n==0){
cout<<"no"<<endl;
exit(0);
}
if((n & (n-1))==0){
    cout<<"yes"<<endl;
}else{
    cout<<"no"<<endl;
}
}

int main() {
int n;
cin>>n;
power(n);
return 0;
}