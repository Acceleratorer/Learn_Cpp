#include <iostream>
using namespace std;
int main()
{
    int a=2;
    int b=5;
    int c=1;
    int m = (a<b) ? ((a<c)? a:c) : ((b<c)? b:c);
    cout<<m;
    return 0;

   
}