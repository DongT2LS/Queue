#include<iostream>
#include<queue>
#include<math.h>
using namespace std;
bool isPrime(int n){
    if(n<2)return false;
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0)
            return false;
        }
        return true;
    } 
}
int main(){
    int n;
    cin >> n;
    queue<int> q;
    for(int i=2;i<10&&i<=n;i++){
        if(isPrime(i)){
           q.push(i);
        }
    }
    while (!q.empty())
    {
        for(int i=1;i<10;i++){
            int k = q.front()*10+i;
            if(k<=n&&isPrime(k)){
                q.push(k);
            }
        }
        cout << q.front()<<" ";
        q.pop();
    }
    
}