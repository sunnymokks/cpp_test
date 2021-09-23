#include <iostream>
using namespace std;

int func1(int &x, int c) {
   c  = c - 1;
   if (c == 0) return 1;
   x = x + 1;
   return func1(x, c) * x;
}

int &func2()
{
    static int x = 10;
    return x;
}

int main()
{
    // Q1: what is the output
    int x = 5;
    cout << func1(x,x) << endl;

    // Q2: what is the output
    func2() = 30;
    cout << func2();

    
    return 0;
}
