#include <bits/stdc++.h>
using namespace std;
void power(int arr[],int n){
int res = 0;
for(int i = 0; i < n; i++){
res = res ^ arr[i];
}
cout<<res;
}
int main() {
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
power(arr,n);
return 0;
}