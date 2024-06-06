#include <bits/stdc++.h>
#define ll long long
#define endl  "\n"
using namespace std;
bool solve(vector<ll>arr,ll n,ll x){
    int i=0, j=n-1; //i=0,j=n-1
    while (i<j){
        if (arr[i] + arr[j] == x){ 
            return true; 
        }
        else if (arr[i] + arr [j] <x){
            i++;
        }
        else{
        j--;
      }
    }

    return false;
} 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll n,m,temp1,temp2,T,x;
    vector<ll>v;
    cin>>n;
    cin>>x;//element
     for(ll i=0;i<n;i++){
     cin>>temp1;
     v.push_back(temp1);
  }
   if(solve(v,n,x)){
    cout<<"found";   
   }else{
       cout<<"not found";
   }   
}
