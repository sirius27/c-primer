#include<iostream>
using namespace std;
int main(){
    int a = 1;
    const int b = 2;
    const int c = b;
    const int d = a;
    double e = 3.2;
    int f = e;
    int g = e;
    cout<<a<<"  "<<b<<"  "<<c<<"  "<<d<<"  "<<e<<"  "<<f<<"  "<<g<<endl;
    return 0;
}
