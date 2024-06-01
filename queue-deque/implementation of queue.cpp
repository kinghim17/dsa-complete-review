//intially cap mentioned
//size=0 front=0
bool isfull(){
 return (size==cap);
}
bool isempty(){
 return (size==0);
}
int getfront(){
 if(isempty){
 return -1;
 }
 return front;
}
int getrear(){
 if(isempty){
 return -1;
 }
 return (front+size-1)%cap;
}
void enque(int x){
 if(isfull){
 return;
 }
 int rear=getrear();
 rear=(rear+1)%cap;
 arr[rear]=x;
 size++;
}
void deque(int x){
 if(isfull){
 return;
 }
 int front=getfront();
 front=(front+1)%cap;
 size--;
}
//STL :
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
 ll n,m,a,b;
 queue<ll>q;
 cin>>n;
 for(ll i=0;i<n;i++){
 cin>>m;
 q.push(m);
 }
 cout<<q.size()<<endl;
 cout << q.front() << " " << q.back()<< endl;
 q.pop();
 cout << q.front() << " " << q.back() << endl;
 while(q.empty() == false){
 cout << q.front() << " " << q.back() << endl;
 q.pop();
 }
}