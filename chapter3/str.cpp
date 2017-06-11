#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string a = "faefewa";
    cout<<a<<endl;
    cout<<"size of a is "<<a.size()<<endl;
    cout<<a.empty()<<endl;
    cout<<a[2]<<endl;
    string s = "fea";
    cout<< s+a<<endl;
    cout<<(s<a)<<endl;
    cout<<"iterating over string"<<endl;
    cout<<"current string: "<<endl;
    for(auto &i:a){
	cout<<i;
        i = toupper(i);
    }
    cout<<endl<<"modified string:"<<endl;
    for(auto i:a){
 	cout<<i;
    }
    cout<<endl;
    return 0;
}
