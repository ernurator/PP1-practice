#include <iostream>
#include <set>

using namespace std;

void f(int n){
    while(n % 2 == 0){
        cout << 2 << " ";
        n /= 2;
    }
    for(int i = 3; i * i <= n; i += 2){
        while(n % i == 0){
            cout << i << " ";
            n /= i;
        }
    }
    if(n != 1) cout << n << " ";
}

int main(){
    int n;
    cin >> n;
    f(n);
    return 0;
}
