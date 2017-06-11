#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char cs[] = {'a','b','c','\0'};
	cout<<strlen(cs)<<endl;
	const char c1[] = {'d','e','f','\0'};
    cout<<strcmp(cs,c1)<<endl;
	string s = "afwae";
	const char *cc = s.c_str();
	string ss = cc;
	cout<<cc<<endl;
	cout<<ss<<endl;
	return 0;
}
