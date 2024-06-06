#include <bits/stdc++.h>
#define ll long long
#define endl  "\n"
using namespace std;
int bisearch(vector<ll>&arr,int low,int high,int x){
	while(low <= high){
		int mid = (low + high) / 2;
		if(arr[mid] == x){
			return mid;
		}else if(arr[mid] > x){
			high = mid - 1; 
		}
		else{
			low = mid + 1;
		}
	}
	return -1;
}
void solve(vector<ll>arr,ll n,ll x){
    if(arr[0]==x){
        cout<<0;
    }
    //handle the 0 case;
	int i = 1;
	while(arr[i] < x){
		i = i * 2;
	}
	if(arr[i]==x){
	   cout<<i;
	}

	cout<< bisearch(arr, i / 2 + 1, i - 1, x);
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
   solve(v,n,m);   
}
