#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int m;
    if (a>b)
    {
        m=b;
        if (b>c)
        {
            m=c;
            cout << c;
        }
        else
        {
            m=c;
        } 
    }
    return 0;
}

