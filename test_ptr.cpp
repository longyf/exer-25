#include <iostream>
using namespace std;

int *func(int a[]) {
	int *b = a;
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	return b;
}

int main() {

	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *b = func(a);
	cout<<b<<endl;

/*	int num2 = 2;
	int *c = &num2;
	int *d = &num2;
	delete c;
	cout<<*d<<endl;*/
	return 0;
}
