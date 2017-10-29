//
// Created by FOXMAN on 10/30/17.
//

#include <iostream>
#include "Sales_data.h"

using namespace std;

int main() {
    Sales_date v_sd_value, v_sd_curr;

    if(cin >>
           v_sd_curr.book_sn >>
           v_sd_curr.sale_count >>
           v_sd_curr.revenue){
        while(cin >>
                  v_sd_value.book_sn >>
                  v_sd_value.sale_count >>
                  v_sd_value.revenue){

            if(v_sd_curr.book_sn == v_sd_value.book_sn){
                v_sd_curr.revenue += v_sd_value.revenue;
                v_sd_curr.sale_count += v_sd_value.sale_count;
            }else{
                cout << v_sd_curr.book_sn << " "
                     << v_sd_curr.sale_count << " "
                     << v_sd_curr.revenue
                     << endl;
                v_sd_curr.book_sn = v_sd_value.book_sn;
                v_sd_curr.sale_count = v_sd_value.sale_count;
                v_sd_curr.revenue = v_sd_value.revenue;
            }
        }
    }
    return 0;
}