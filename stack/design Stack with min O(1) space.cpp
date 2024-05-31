//naive
#include <bits/stdc++.h>
using namespace std;
struct MyStack {
 stack<int> s;
 int min;
void push(int x) {
 if(s.empty() ) {
 min=x;
 s.push(x);
 }
 else if(x<=min){
 s.push(x-min);
 min=x;
 }else{
 s.push(x);
 }
 }
int pop() {
 int t=s.top();
 s.pop();
 if(t<=0){
 int res=min;
 min=min-t;
 return res;
 }else{
 return t;
 }
 }
int top() {
 int t=s.top();
 return ((t<=0)? min : t);
 }
int getMin() {
 return min;
 }
};
int main()
{
 MyStack s;
 s.push(4);
 s.push(5);
 s.push(8);
 s.push(1);
 s.pop();
 cout<<" Minimum Element from Stack: "<<s.getMin();
 return 0;
}
//pro
class MinStack {
public:
stack<long long int>s;
long long int min;
 MinStack() {

 }

 void push(long long int val) {
 if(s.empty()){
 min=val;
 s.push(val);
 }else if(val<min){
 s.push((2*val)-min);
 min=val;
 }else{
 s.push(val);
 }
 }

 void pop() {
 if(s.top()>=min){
 s.pop();
 }else if(s.top()<min){
 min = (2*min)-s.top();
 s.pop();
 }
 }

 int top() {
 if(s.empty()){
 return -1;
 }else {
 return (s.top()>=min)?s.top():min;
 }
 }

 int getMin() {
 return s.empty()?0:min;
 }
};




