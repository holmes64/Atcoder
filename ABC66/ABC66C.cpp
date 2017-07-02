#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
typedef long long ll;

using namespace std;

int main(){
    ll n; 
    cin >> n;
    stack<ll> T1;
    queue<ll> T2;
    queue<ll> T3;
    int a;

    for(int i=0; i<n; i++){
        cin >> a;
        T3.push(a);
    }

        if(T3.size()%2 == 0){
            for(int i=0; i<n; i++){
                if(i%2 == 0){
                    a = T3.front(); T3.pop();
                    T2.push(a);
                }else{
                    a = T3.front(); T3.pop();
                    T1.push(a);
                }
            }
        }else{
            for(int i=0; i<n; i++){
                if(i%2 == 0){
                    a = T3.front(); T3.pop();
                    T1.push(a);
                }else{
                    a = T3.front(); T3.pop();
                    T2.push(a);
                }
            }
        }
    
    int l = T1.size() + T2.size();

    cout << T1.top();
    T1.pop();

    while(T1.size() !=  0){
        cout << " " << T1.top();
        T1.pop();
    }
    while(T2.size() != 0){
        cout << " " << T2.front();
        T2.pop();
    }
    cout << endl;
        
    return 0;
}