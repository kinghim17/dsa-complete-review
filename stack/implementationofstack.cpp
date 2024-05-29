//array implementation
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 struct MyStack{
 int *arr;
 int cap;
 int top;
 //intialising
 MyStack(int c){//constructor
 cap=c;
 arr=new int [cap];
 top=-1;

}
 void push(int x){
 if(top==cap-1){
 cout<<"Stack is full"<<endl;
 return;
}
 top++;
 arr[top]=x;

}

 int pop(){
 if(top==-1){
 cout<<"Stack is Empty"<<endl;
 return INT_MIN;

}
 int res=arr[top];
 top--;
 return res;

}
 int peek(){
 if(top==-1){
 cout<<"Stack is Empty"<<endl;
 return INT_MIN;

}
 return arr[top];

}

 int size(){
 return (top+1);

}

 bool isEmpty(){
 return top==-1;

}
};
int main(){
 //remember the size==5
 MyStack s(5);
 s.push(5);
 s.push(10);
 s.push(15);
 cout<<s.pop()<<endl;
 cout<<s.size()<<endl;
 cout<<s.peek()<<endl;
 cout<<s.isEmpty()<<endl;
 return 0;
 }
 
 //vector implementation
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 struct MyStack{
 vector<int> v;
 void push(int x){
 v.push_back(x);

}
 int pop(){
 int res=v.back();
 v.pop_back();
 return res;

}
 int peek(){
 return v.back();

}
 int size(){
 return v.size();

}
 bool isEmpty(){
 return v.empty();

}
};
int main(){
 //here the size isnt specified
 MyStack s;
 s.push(5);
 s.push(10);
 s.push(15);
 cout<<s.pop()<<endl;
 cout<<s.size()<<endl;
 cout<<s.peek()<<endl;
 cout<<s.isEmpty()<<endl;
}
//stack implementation
#include <iostream>
#include <stack>
using namespace std;
int main(){
 stack<int>s;
 int n,m,x;
 cin>>n;
 //input
 for(int i=0;i<n;i++){
 cin>>x;
 s.push(x);
 }
 cout<<s.size()<<endl;
 cout<<s.top()<<endl;
 s.pop();
 cout<<s.top()<<endl;
 s.push(5);
 cout<<s.top()<<endl;
 //for emptying the stack
 while(s.empty()==false){
 cout<<s.top()<<endl;
 s.pop();
 }
 return 0;
}


 