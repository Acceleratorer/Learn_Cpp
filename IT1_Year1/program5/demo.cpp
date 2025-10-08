#include <iostream>
using namespace std;
main() 
{
    int x=1, y=2;
    if (( x < y ) ||( ++x > 0 ))
        cout << x ;
    else
        cout << y  ;
    return 0;
   
}