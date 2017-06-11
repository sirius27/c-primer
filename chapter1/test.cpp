#include <iostream>
int main(){
    int val1 = 0, val2 = 0;
    std::cin>>val1>>val2;
    std::cout<<"inputed values are "<<val1<<" and "<<val2<<std::endl;
    int a = 0, val = 0, cnt = 0;
    while(std::cin>>val){
	a += val;
	cnt ++;
	if(cnt >15){
	    break;
	}
    }
    std::cout<<a<<std::endl;
    return 0;
}
