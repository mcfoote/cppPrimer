#include<string>
#include<iostream>
#include"Sales_data.h"

int main() {
    
    Sales_data data1, data2;
    double price = 0;

    std::cin >> data1.bookNo >> data1.unitsSold >> price;

    data1.revenue = data1.unitsSold * price;

    std::cin >> data2.bookNo >> data2.unitsSold >> price;

    data2.revenue = data2.unitsSold * price;

    if(data1.bookNo == data2.bookNo) {
        unsigned totalCnt = data1.unitsSold + data2.unitsSold;
        double totalRevenue = data1.revenue + data2.revenue;

        std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";

        if(totalCnt != 0) std::cout << totalRevenue / totalCnt << std::endl;
        else std::cout << "(No Sales)" << std::endl;
        return 0; 
    } else {
        std::cerr << "Data must refer to the same ISBN" << std::endl;
        return -1;
    }

}