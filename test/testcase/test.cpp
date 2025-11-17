#include <bits/stdc++.h>
#define max 1000
using namespace std;

void input(int &n,int a[max]){
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
}
void check(int &n,int a[max]){
    int s = 0;
    for (int i=0;i<n;i++){
        if ( i % 2 == 0) {
            s += a[i]; 
        }
    }    
    cout << s << "\n";
}

int main (){
    int n;
    int a[max];
    input(n, a);
    check(n, a);
    return 0;
}