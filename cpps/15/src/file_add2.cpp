#include<iostream>

#include "Sales_item.h"

int main(){
    Sales_item Total,Trans;
    if(std::cin >> Total){
    while (std::cin >> Trans)
    {
        Total += Trans;
    }
    std::cout << Total;
    return 0;
    }
    else{
        std::cerr << "No Data" << std::endl;
        return -1;
    }
}