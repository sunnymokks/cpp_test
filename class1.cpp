#include <iostream>
using namespace std;

class X
{
};

class Y
{
public:
    virtual ~Y() {};
};

int main()
{
    // Q1: can it compiled?
    X x1;
    X x2(x1);

    // Q2: what is the output?
    cout << sizeof(X); // why?
    cout << sizeof(Y); // why?


    return 0;
}
