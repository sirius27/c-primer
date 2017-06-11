#include<iostream>
using namespace std;
class Dog{
    public:
    string name;
    int age;
    void foo();
};
int main(){
    /*assign the address of a reference to pointer*/	
    int a = 2;
    int &b = a;
    int *c = &a;
    int *d  = &b;
    cout<<"address of c is "<<c<<"  "<<"address of a is "<<&a<<endl;
    cout<<"address of d is "<<d<<"  "<<"address of b is "<<&b<<endl;
    /*use pointer of declared but undefined variable*/
    int e;
    int *f = &e;
    cout<<"e is "<<e<<endl;
    cout<<"address of e is "<<&e<<endl;
    Dog dog;
    Dog *pd = &dog;
    cout<<"address of dog is "<<&dog<<endl;
    cout<<"age of dog is "<<dog.age<<endl;
    //pointer once declared, initialize by default
    //char *p;
    //cout<<"address of p is "<<p<<endl;
    //cout<<"variable p points to is "<<*p<<endl;
    //null pointer
    int *q = 0; //equivalent to int *q = nullptr or int *q = NULL;
    //cout<<"q is "<<q<<"  address of q is "<<q<<endl; ERROR
    //pointer to const
    const int *ptr;
    int x = 1;
    int y = 2;
    ptr = &x;
    cout<<"value of ptr is "<<*ptr<<endl;
    ptr = &y;
    cout<<"value of ptr is "<<*ptr<<endl;
    //const pointer
    int z = -1;
    int zz = -2;
    const int czz = -3;
    int *const pp = &z;
    cout<<"value of pp is "<<*pp<<endl;
    *pp = -4;
    cout<<"value of z is "<<z<<endl;
    //error when change pp to &zz
    const int *const cpp = &czz;
    cout<<"value of cpp is "<<*cpp<<endl;
    const int *const cpp1 = &zz;
    cout<<"value of cpp1 is "<<*cpp1<<endl;
    zz = -5;
    cout<<"value of cpp1 is "<<*cpp1<<endl;
	int *ppp;
	cout<<"address of pp is "<<ppp<<endl;
	cout<<"next address of pp is "<<ppp+1<<endl;
	cout<<"next next address of pp is "<<ppp+2<<endl;
    return 0;
}
