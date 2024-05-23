#include <bits/stdc++.h>
using namespace std;
const int hellu=256;
void ana(string &s1){
 int count[hellu]={0};
 int j=s1.length();
 for(int i=0;i<j;i++){
 count[s1[i]]++;
 }
 for(int i=0;i<256;i++){
 if(count[i]>0)
 cout<<char(i)<<" "<<count[i]<<endl;
 }
}
int main(){
 string str1;
 cin>>str1;
 ana(str1);

}
