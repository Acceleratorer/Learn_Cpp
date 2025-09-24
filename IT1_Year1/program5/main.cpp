#include <iostream>
using namespace std;

main() 
{
    long long a;
    cin >> a;
    cout << a*(a > 0) + -a * (a < 0) ;
    return 0;
}
