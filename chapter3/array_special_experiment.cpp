#include<iostream>
using namespace std;
int main(){
	int a[] = {1,2,3,4};
	cout<<"10th element of a is "<<a[10]<<endl;
	int *pbeg = begin(a);
	int *in_bound = pbeg + 2;
	int *out_bound = pbeg + 10;
	int *aa;
	int *bb;
	cout<<"aa is "<<aa<<" while bb is "<<bb<<endl;
	cout<<"aa < bb? "<<(aa<bb)<<endl;
	int kk;
	int *ptr = &kk;
	cout<<"value and address of 1 int past kk is "<<ptr[1]<<" "<<ptr+1<<endl;
	return 0;
}
