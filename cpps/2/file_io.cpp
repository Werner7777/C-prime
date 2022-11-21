#include<iostream>

#include "Sales_data.h"

int main(){
    Sales_data book;
    std::cin >> book.bookNo >> book.revenue >> book.unit_sold;
    std::cout << book.bookNo << book.revenue << book.unit_sold << std::endl;
}