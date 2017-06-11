#include<iostream>
using namespace std;
int main(){
    typedef int i, *p;
    //using d = double;  version of gcc not supported
    i a = 1;
    p b = &a;
    cout<<"value of a is "<<a<<endl;
    cout<<"address of b is "<<b<<endl;
    return 0;
}
