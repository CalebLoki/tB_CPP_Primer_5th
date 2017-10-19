#include <iostream>

using namespace std;

int main() {
    int d = 3;
    int *pd = 0;
    void *pv;

    pd = &d;
    pv = &d;

    cout << *pd << endl;

    *pd = 42;

    cout << *pd << endl;

    cout << d << endl;

    cout << pv << endl;

    cout << &pv << endl;

    return 0;
}

