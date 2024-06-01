//Circular implementation:
void deletfront(){
 if(isempty()){
 return;
 }
 front=(front+1)%cap;
 size--;
}
void insertrear(){
 if(inempty()){
 return;
 }
 int new_rear=(front+size)%cap;
 arr[new_rear]=n;
 size++;
}
void insertfront(int n){
 if(isfull()){
 return;
 }
 front=(front+cap-1)%cap;
 arr[front]=x;
 size++;
}
void deleterear(){
 if(isempty()){
 return;
 }
 size--;
}
//Stl approach:
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
 deque<ll>dq;
 ll n,m,p;
 cin>>n;
 for(ll i=0;i<n;i++){
 cin>>m;
 dq.push_back(m);
 }
 dq.push_front(10);
 for(auto x:dq){
 cout<<x<<" ";
 }
 //insert in the deque:
 auto it=dq.begin();
 it++;
 dq.insert(it,40);
 for(auto x:dq){
 cout<<x;
 }
 cout<<dq.size();
 dq.pop_front();
 dq.pop_back();
 cout<<dq.size();
}