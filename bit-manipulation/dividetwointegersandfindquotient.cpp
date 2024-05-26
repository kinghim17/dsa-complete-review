#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(ll dividend,ll divisor){
bool sign=((dividend)>=0)==((divisor)>=0)?true:false;
dividend=abs(dividend);
divisor=abs(divisor);
ll result=0;
while(dividend-divisor>0){
ll count=0;
while(dividend-(divisor<<1<<count)>=0){
count++;
}
result+=(1<<count);
dividend-=(divisor<<count);
}
cout<<result;
}
int main(){
ll m,temp,n;
cin>>m>>n;
solve(m,n);
}
