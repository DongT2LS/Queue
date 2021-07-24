#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
          int a;
          cin >> a;
          q.push(a);
    }
    int k;
    cin >> k;
    while(k>0){
        int a;
        a=q.front();
        q.pop();
        q.push(a);
        k--;
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

}