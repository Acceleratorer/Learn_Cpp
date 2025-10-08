#include <iostream>
using namespace std;

int test(int x)
{
    cout << "Enter a number: ";
    cin >> x;
    if (x < 0)
        cin >> x;
    else
        return 0;
}
int main()
{
    int x;
    x = test(x);
    return 0;
}