#include <iostream>
using namespace std;

double average(int x, int y)
{
    return x + y / 2;
}

int main()
{
    cout << "average=" << average(3.6, 4.8) << endl;
    return 0;
}
