#include <iostream>
using namespace std;
int main()
{
   int x=1;
   int y;
   y = ++x + x++;
   cout << x <<"-" << y;
    return 0;
}
