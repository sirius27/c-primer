#include<iostream>
using namespace std;
int get_original_size(int size){
	return size;
}
int get_size(int size){
	return size;
}
string sa[10];
int ia[10];
int main(){
	//warning when defined with variable and initialized, but no problem to run if mismatch can be handled
	//here it's not a full initialization.
	int fa[get_size(get_original_size(10))]{1,2,3,4,5,6,7,8,9};
	int a[] = {1,2,3,4,5,6,7,8,9};
	int *end_iter = &a[10];
	int end_iter_val = a[10];
	int past_end_val = a[12];
	a[13] = 2;
	cout<<a[13]<<endl;
	cout<<"value in the off-the-end iterator is "<<end_iter_val<<endl;
	cout<<"value of several ints past array head is "<<past_end_val<<endl;
	unsigned buff_size = 1024;
	int aa[buff_size];
	int aaa[3*8-2];
	for(auto i:a){
		cout<<i<<" ";
	}
	cout<<endl;
	auto b = a;
	cout<<"b is "<<b[0]<<endl;
	decltype(a) bb;
	//but we cannot iterate b cuz it's a pointer
	//char array
	char d[9] = "waefewa";
	for(auto c:d){
		cout<<c<<" ";
	}
	cout<<endl;
	string sa2[10];
	int ia2[10];
	for(auto i:sa){
		cout<<i<<" ";
	}
	cout<<endl;
	for(auto i:ia){
		cout<<i<<" ";
	}
	cout<<endl;
	for(auto i:sa2){
		cout<<i<<" ";
	}
	cout<<endl;
	for(auto i:ia2){
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
