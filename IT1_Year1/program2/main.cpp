#include <iostream>
using namespace std;
int main()
{
    int xe,d1,d2,d3,d4,d5;
    cout<<"Nhap so xe: "<<xe;
    cin>>xe;
    d1 = xe/10000;
    d2=(xe/1000)%10;
    d3=(xe/100)%10;
    d4=(xe/10)%10;
    d5=xe%10;
    cout<<"Tong cac so cua xe:"<<d1+d2+d3+d4+d5;
    return 0;
}