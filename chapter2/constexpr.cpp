#include<iostream>
using namespace std;
int add(int x, int y){return x+y;}
int main(){
    constexpr int a = 20;
    constexpr int b = add(2,3);
    return 0;
}
