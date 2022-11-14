#include<iostream>

#include "Sales_item.h"

int main(){
    Sales_item Total,Trans;
    if(std::cin >> Total){
    while (std::cin >> Trans)
    {
        if (Total.isbn() == Trans.isbn())
        {
            Total += Trans;
        }
        else
        {
            std::cout << Total << std::endl;
            Total = Trans;
        }
    }
    std::cout << Total << std::endl;
    return 0;
    }
    else{
        std::cerr << "No Data" << std::endl;
        return -1;
    }
}