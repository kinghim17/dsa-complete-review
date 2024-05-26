#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
 ll n,m,mask,workers;
 cin>>m;
 vector<int>masks(n,0);//making it intial to 0
 for(ll i=0;i<m;i++){
 cin>>workers;
 for(ll i=0;i<workers;i++){
 int day;
 cin>>day;
 mask=(mask|(1<<day));//bitmasking
 }
 masks[i]=mask;//storing the mask
 }
 //intersection
 ll maxdays=0,person1,person2;
 for(ll i=0;i<n;i++){
 for(ll j=i+1;j<n;j++){
 ll intersection=(masks[i]&masks[j]);
 ll common=__builtin_popcount(intersection);
 //how to know which is common..
 if(common>maxdays){
 maxdays=common;
 person1=i;
 person2=j;
 }

 }
 }
 cout<<person1<<" "<<person2<<" "<<maxdays;

}