#include <bits/stdc++.h>
#define ll long long
#define endl  "\n"
using namespace std;
int solve(vector<ll>&arr,int n,int x){
    ll low = 0, high = n - 1;
		while(low <= high){
		ll mid = (low + high) / 2;

		if(arr[mid] == 0){
			low = mid + 1;
		}
		else{
			if(mid == 0 || arr[mid - 1] == 0){
				return (n - mid);
			}
			else{ 
				high = mid -1;
			}
		}
	}

	return 0;
   
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
