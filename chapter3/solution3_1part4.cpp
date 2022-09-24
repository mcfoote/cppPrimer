#include<iostream>
#include<string>
#include"Sales_data.h"

using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::string;

int main() {
    
    Sales_data data1, data2;
    double price = 0;

    cin >> data1.bookNo >> data1.unitsSold >> price;

    data1.revenue = data1.unitsSold * price;

    cin >> data2.bookNo >> data2.unitsSold >> price;

    data2.revenue = data2.unitsSold * price;

    if(data1.bookNo == data2.bookNo) {
        unsigned totalCnt = data1.unitsSold + data2.unitsSold;
        double totalRevenue = data1.revenue + data2.revenue;

        cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";

        if(totalCnt != 0) cout << totalRevenue / totalCnt << endl;
        else cout << "(No Sales)" << endl;
        return 0; 
    } else {
        cerr << "Data must refer to the same ISBN" << endl;
        return -1;
    }

}