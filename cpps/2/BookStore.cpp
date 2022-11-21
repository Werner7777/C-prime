#include<iostream>

#include "Sales_data.h"

int main(){
    Sales_data Total,Trans;
    if(std::cin >> Total.bookNo >> Total.revenue >> Total.unit_sold){
    while (std::cin >> Trans.bookNo >> Trans.revenue >> Trans.unit_sold)
    {
        if (Total.bookNo == Trans.bookNo)
        {
            Total.revenue += Trans.revenue;
        }
        else
        {
            std::cout << Total.bookNo <<Total.revenue << Total.unit_sold << std::endl;
            Total = Trans;
        }
    }
    std::cout << Total.bookNo <<Total.revenue << Total.unit_sold << std::endl;
    return 0;
    }
    else{
        std::cerr << "No Data" << std::endl;
        return -1;
    }
}