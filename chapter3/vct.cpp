#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	vector<int> a;
	vector<int> b;
	a.push_back(1);
	a.push_back(2);
	cout<<"a:"<<endl;
	//testing for loop
	for(auto i:a){
		cout<<i<<"  ";
	}
	cout<<"\nb:"<<endl;
	for(auto i:b){
		cout<<i<<"  ";
	}
	vector<int> c(0,4);
	for(auto i:c){
		cout<<i<<" ";
	}
	cout<<endl;
	//defalut priority of {} initialize
	vector<string> s{2,"hi"};
	for(auto i:s){
		cout<<i<<" ";
	}
	cout<<endl;
	//growing vector in a for loop
	cout<<"elements in an unfixed vector:"<<endl;
	int cnt = 2;
	vector<int> v(cnt,1);
	for(auto i:v){
		//v.push_back(2);
		v.push_back(2);
		cout<<i<<" ";
	}
	cout<<endl;
	for(auto j:v){
		cout<<j<<" ";
	}
	cout<<endl;
	int ar[] = {1,2,3,4,5};
	cout<<"array initialized vector"<<endl;
	int pa = 2;
	int *p = &pa;
	//vector<int> vv(begin(ar)+1, end(ar)+1);
	vector<int> vv(p, p+10);
	for(auto i:vv){
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
