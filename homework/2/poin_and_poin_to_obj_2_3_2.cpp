//
// Created by FOXMAN on 10/21/17.
//

#include <iostream>

using namespace std;

int main() {
    double v_d = 0.233, *p_d = &v_d;
    double v_ch_d = 0.42;

    *p_d = 42;

    cout << "*p_d = " << *p_d << ",\t &v_d = " << &v_d << endl;

    cout << "p_d = " << p_d << ",\t &p_d = " << &p_d << endl << "--------------------" << endl;

    p_d = &v_ch_d;

    cout << "*p_d = " << *p_d << ",\t &v_d = " << &v_d << endl;

    cout << "p_d = " << p_d << ",\t &p_d = " << &p_d << endl;

    cout << "&v_ch_d = " << &v_ch_d << endl;

    return 0;
}
