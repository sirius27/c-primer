#include<iostream>
using namespace std;
int main(){
    int a = 2;
    int *b;
    b = &a;
    cout<<*b<<endl;
    //compare bind between same type and different types
    double c = 2.3;
    const int &d = c;
    cout<<"c is "<<c<<"  current reference to c is "<<d<<endl;
    c = 3.3;
    cout<<"c is "<<c<<"  current reference to c is "<<d<<endl;
    
    int e = 2;
    const int &f = e;
    cout<<"e is "<<e<<"  current reference to e is "<<f<<endl;
    e = 3;
    cout<<"e is "<<e<<"  current reference to e is "<<f<<endl;
    cout<<"see d doesn't change but f changes with e"<<endl;
    const int &dd = 2;
    cout<<"value of dd is "<<dd<<endl;
    const int *cp;
    return 0;
}
