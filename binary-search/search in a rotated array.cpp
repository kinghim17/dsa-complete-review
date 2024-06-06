#include <bits/stdc++.h>
#define ll long long
#define endl  "\n"
using namespace std;
int solve(vector<ll>v,ll n,ll x){
    ll low=0,high=n-1;
    while(low<=high){
        ll mid=(low+high)/2;
        if(v[mid]==x){
            return mid;
        }//upto this normal binary search
        else if(v[mid]>v[low]){
            //left half sorted condition
            if(x>=v[low] && x<v[mid]){
                high=mid-1;
                //it means it lies in the range of left half
            }else if (v[ low ] == x) {
                return low;
            }else{
                low=mid+1;
                //right half the element lies...
            }
        }
        else{//based on the right half
            if(x>v[mid] && x<=v[high]){
                low=mid+1;
            }else if (v[ high ] == x) {
                return high;
            }else{
                high=mid-1;
            }
        }
    }
    return -1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll n,m,temp1,temp2,T;
    vector<ll>v;
    cin>>m;//number to be searched
    cin>>n;
     for(ll i=0;i<n;i++){
     cin>>temp1;
     v.push_back(temp1);
  }
   cout<<solve(v,n,m);   
}
