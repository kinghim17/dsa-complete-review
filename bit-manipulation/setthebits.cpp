//naive(multiply)
#include <bits/stdc++.h>
using namespace std;
void isset(int n,int k){
int x=1;
for(int i=0;i<(k-1);i++){
x=x*2;
}
if((x&n)!=0){
cout<<"yes"<<endl;
}else{
cout<<"no"<<endl;
}
}
int main() {
int n,k;
cin>>n>>k;
isset(n,k);
return 0;
}
//naive(divide)
#include <bits/stdc++.h>
using namespace std;
void isset(int n,int k){
for(int i=0;i<(k-1);i++){
n=n/2;
}
if((n&1)!=0){
cout<<"yes"<<endl;
}else{
cout<<"no"<<endl;
}
}
int main() { int n,k;
cin>>n>>k;
isset(n,k);
return 0;
}
//pro(left/right shift operator)
#include <bits/stdc++.h>
using namespace std;
void isset(int n,int k){
int x=(1<<(k-1));
if((x&n)!=0){
cout<<"yes"<<endl;
}else{
cout<<"no"<<endl;
}
}
int main() {
int n,k;
cin>>n>>k;
isset(n,k);
return 0;
}


