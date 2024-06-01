#include<bits/stdc++.h>
#define ll long long
using namespace std;
void printMax(vector<ll>arr, int n, int k){
 deque<int> dq;
 for (int i=0;i<k;i++){
 while (!dq.empty() && arr[i] >=arr[dq.back()])
 dq.pop_back();
 dq.push_back(i);
 }
 for (int i=k; i < n; ++i) {
 cout << arr[dq.front()] << " ";
 while ((!dq.empty()) && dq.front() <= i -k)
 dq.pop_front();
 while ((!dq.empty()) && arr[i] >=arr[dq.back()])
 dq.pop_back();
 dq.push_back(i);
 }
 cout << arr[dq.front()];
}
int main(){
 ll a,b,m,n,k;
 cin>>n>>k;
 vector<ll>v;
 for(ll i=0;i<n;i++){
 cin>>m;
 v.push_back(m);
 }
 printMax(v,n,k);
}