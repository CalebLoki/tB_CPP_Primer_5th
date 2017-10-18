//
// Created by FOXMAN on 10/19/17.
//

#include <iostream>
using namespace std;

int main() {

    int y;
    cout << "Please entry one number" << endl;
    cin >> y;
    for(int i{1}; i <= y; ++i){
        for(int j{1}; j<= i; ++j){
            cout << i * j << " = " << i << " * " << j << " \t";
        }
        cout << endl;
    }
    return 0;
}