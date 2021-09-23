#include <iostream>
using namespace std;

class X
{
    public:
        X() { cout << "X ctor" << endl; }
        X(int i) { cout << "X ctor" << i << endl ; }
        ~X() { cout << "X dtor" << endl; }
};

class B
{
    public:
        B() : x1(1), x2(2) { cout << "B ctor" << endl; }
        ~B() { cout << "B dtor" << endl; }

        virtual void work() { cout << "B::work()" << endl; }
    private:
        X x2, x1;
};

class D: public B
{
    public:
        D() { cout << "D ctor" << endl; }
        ~D() { cout << "D dtor" << endl; }

        virtual void work() { cout << "D::work()" << endl; }
    private:
        X x;
};

int main()
{
    // Q1: output of following 3 lines
    B* pB = new D;
    pB->work();
    delete pB;
    // Q1.1: Any problem detected?

    // Q2: Which class's work() is called?
    D d;
    B b = d;
    b.work();

    return 0;
}
