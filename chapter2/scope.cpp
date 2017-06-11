#include<iostream>
using namespace std;
int a = 0;
int main(){
    int a = 2;
    int i = 0;
    while(i < 100){
        int b = 3;
 	i++;
        if(i == 50){
    	    int a = 5;
	    cout<<"sum is "<<::a+b<<endl;
	}
    }
    return 0;
}
