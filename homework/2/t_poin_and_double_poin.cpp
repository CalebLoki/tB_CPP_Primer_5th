//
// Created by FOXMAN on 10/21/17.
//

#include <iostream>

using namespace std;

int main() {

    int i = 42;
    int *p = &i;
    int **pp = &p;

    int &r = *p;
    int *p_new_p = p;

    cout << "The value of i\n"
         << "direct value: " << i << "\n"
         << "indirect value: " << *p << "\n"
         << "double indirect value: " << **pp << "\n"
         << "*p_new_p is " << *p_new_p << endl;

    cout << "The pointer address is \n"
         << "p is:" << p << "\n"
         << "pp is:" << pp << "\n"
         << "p_new_p is:" << p_new_p << endl;

    return 0;
}