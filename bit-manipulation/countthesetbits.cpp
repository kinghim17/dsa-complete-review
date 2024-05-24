#include <bits/stdc++.h>
using namespace std;
void count(int n){
int res=0;
while(n>0){
if(n%2==1){
res++;
}
n=n/2;
}
cout<<res;
}
int main() {
int n;
cin>>n;
count(n);
return 0;
}
//pro
//direct 

#include <bits/stdc++.h>
using namespace std;
int main(){
	int n = 4;
	cout << __builtin_popcount(n);

	return 0;
}

