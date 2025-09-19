#include <iostream>
#include <cmath>
using namespace std;
int main()  
{
    int n;
    cin >> n;
    int t = (int)sqrt(n);
    if (t * t == n)
        cout <<"Yes"<< endl;
    else
        cout << "NO" << endl;
    return 0;
}