#include<iostream>

#include "Sales_data.h"

int main(){
    Sales_data book1,book2;
    std::cin >> book1.bookNo >> book1.revenue >> book1.unit_sold >> book2.bookNo >> book2.revenue >> book2.unit_sold; 
    if(book1.bookNo == book2.bookNo){
    std::cout << book1.revenue+book2.revenue << std::endl;
    return 0;
    }
    else{
        std::cerr << "ISBN must be same" << std::endl;
        return -1;
    }
}