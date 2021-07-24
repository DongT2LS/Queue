#include<iostream>
#include<stack>
using namespace std;
string to_string(long long n){
    string str="";
    while(n>0){
    str= char('0'+n%10)+str;
    n/=10;
    }
    return str;
}
int main(){
    string s;
    getline(cin,s);
    s = s+'@';
    stack<char> st;
    string str="";
    for(int i=0;i<s.length();i++){
        if(st.empty()||st.top()==s[i]){
            st.push(s[i]);
        }else{
            int count =0;
            str = str + st.top();
            while(!st.empty()){
                count++;
                st.pop();
            }
            str = str + to_string(count);
            st.push(s[i]);
        }
    }
    cout << str;
}