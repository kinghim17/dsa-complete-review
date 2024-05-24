#include <bits/stdc++.h>
using namespace std;
void count(int n){
int res=0;
while(n>0){
n=n&(n-1);
res++;
}
cout<<res;
}
int main() {
int n;
cin>>n;
count(n);
return 0;
}
