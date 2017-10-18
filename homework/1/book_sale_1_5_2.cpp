//
// Created by FOXMAN on 10/19/17.
//

#include <iostream>
#include "Sales_items.h"
using namespace std;

int main() {
    Sales_item v_s_curr, v_s_value;

    if(cin >> v_s_curr){
        while(cin >> v_s_value){

            if(v_s_curr.isbn() == v_s_value.isbn()){
                v_s_curr += v_s_value;
            }else{
                cout << "The total sale of this book are: " << v_s_curr;
                v_s_curr = v_s_value;
            }
        }
        cout << "The last total sale of this book are: " << v_s_curr;
    }else{
        cerr << "No data entry!" << endl;
        return -1;
    }
    return 0;
}
