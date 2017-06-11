#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	for(int i = 0;i < 10;i++){
		v.push_back(i);
	}
	const vector<int> cv;
	auto b = v.begin();
	cout<<"b is "<<*b<<endl;
	b++;
	cout<<"now b is "<<*b<<endl;
	const decltype(b) cb = b;
	cout<<"cb is "<<*cb<<endl;
	//but you cannot use cb++ cuz it's constant
	auto d = b+20;
	return 0;
}
