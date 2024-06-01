struct stack{
 queue<ll>q,q2;
 int top(){
 return q.front();
 }
 int size(){
 return q.size();
 }
 int pop(){
 if(q.empty()==true){
 return;
 }
 int k=q.front();
 q.pop();
 return k;
 }
 int push(int x){
 while(q.empty()==false){
 q2.push(q.front());
 q.pop();
 }
 q.push(x);
 while(q2.empty()==false){
 q.push(q2.front());
 q2.pop();
 }
 }
}