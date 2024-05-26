#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(ll m){
 //odd-even check
 if(m&1!=0){
 cout<<"odd"<<endl;
 }else{
 cout<<"even"<<endl;
 }
 //divide or multiply by 2
 cout<<(m>>1)<<endl;//divide
 cout<<(m<<1)<<endl;//multiply
 //conversion from upper case to lower case
 //difference between A=1000001 a=1100001
 //basically toggle and change
 char A='A';
 char b=A|(1<<5);//toggling
 cout<<b<<endl;
 char B='a';
 char C=(B&(~(1<<5)));//toggling
 cout<<C<<endl;

 //shortrick
 char d='A'|32;
 cout<<d<<endl;
 char e='a'^32;
 cout<<e<<endl;
}
int main(){
 ll n,m;
 cin>>m;
 solve(m);
}
//check LSB,MSB,Swap operation
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve3(ll m){
 for(ll i=10;i>=0;i--){
 cout<<((m>>i)&1);
 }
 cout<<endl;
}
void solve1(ll a){
//clear LSB
int i=4;
solve3(a);
int k=(a&(~((1<<i+1)-1)));
solve3(k);
//clear MSB
int j=(a&((1<<i+1)-1));
solve3(j);
}
void solve2(ll a,ll b){
 //swap
 a=a^b;
 b=b^a;
 a=a^b;
 cout<<a<<" "<<b;
}
int main(){
 ll a,b;
 cin>>a>>b;
 solve1(a);
 solve2(a,b);
}