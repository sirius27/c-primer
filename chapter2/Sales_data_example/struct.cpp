#include<iostream>
#include "Sales_data.h"
using namespace std;
int main(){
    Sales_data data1, data2;
    cin>>data1.bookNo>>data1.units_sold>>data1.price;
    cin>>data2.bookNo>>data2.units_sold>>data2.price;
    data1.revenue = data1.units_sold * data1.price;
    data2.revenue = data2.units_sold * data2.price;
    cout<<"revenue of data1 is "<<data1.revenue<<endl;
    cout<<"revenue of data2 is "<<data2.revenue<<endl;
    return 0;
}
