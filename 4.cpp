#include <iostream>
using namespace std;

void func(float &y,float &z)
{
    float sum, riz;
    sum = y + z;
    riz = y - z;
    y = sum;
    z = riz;

}

int main()
{
    float a = 2.1;
    float b = 1.1;
    func(a,b);
    cout << a << " " << b;
}


