#include<iostream>

#include "Sales_data.h"

int main(){
    Sales_data Trans;
    if(std::cin >> Trans.bookNo >> Trans.revenue >> Trans.unit_sold){
    double TotalRevenue = Trans.revenue;
    while (std::cin >> Trans.bookNo >> Trans.revenue >> Trans.unit_sold)
    {
        TotalRevenue += Trans.revenue;
    }
    std::cout << TotalRevenue << std::endl;
    return 0;
    }
    else{
        std::cerr << "No Data" << std::endl;
        return -1;
    }
}