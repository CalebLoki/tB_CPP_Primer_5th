//
// Created by FOXMAN on 10/20/17.
//

#include <iostream>

using namespace std;

int main() {
    /** This is reference */
    int i, &ir = i;

    i = 5;
    ir = 10;
    i = 42;

    cout << "ir = " << ir << ", i = " << i << endl;
    /** This is pointer */
    double d = 0.01;

    double *pd = &d;
    double *p1 = 0;
    *pd = 42;

    double d1 = 2.7182;
    double d2 = 0.3;

    pd = &d1;
    // pd = d2; cant't do this

    cout << "*pd = " << *pd <<  ", d = " << d << ", &d = " << &d << ", pd = " << pd << endl;
    cout << "_ " << *p1 << "_ " << p1 << "_ " << endl;

    return 0;
}