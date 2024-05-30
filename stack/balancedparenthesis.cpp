#include <bits/stdc++.h>
using namespace std;
bool isBalanced(string s) {
 stack<char> st;//remember the char stack
 for (char c : s) {
 if (c == '(' || c == '[' || c == '{') {
 st.push(c);
 } else {
 if (st.empty()) {
 return false;
 } else if (c == ')' && st.top() != '(') {
 return false;
 } else if (c == ']' && st.top() != '[') {
 return false;
 } else if (c == '}' && st.top() != '{') {
 return false;
 } else {
 st.pop();
 }
 }
 }
 return st.empty();
}
int main(){
 string s;
 cin>>s;
 if (isBalanced(s)) {
 cout << "The parentheses in the string are
balanced." << endl;
 } else {
 cout << "The parentheses in the string are
not balanced." << endl;
 }
}
