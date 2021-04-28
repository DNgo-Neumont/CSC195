#include <iostream>

using namespace std;

void set(int input) {
	int w = 300;
}

void swap(int a, int b) {
	int temp = a;

	a = b; 
	b = temp;
}


int main() {
	int i1 = 10;
	int i2 = 20;

	int& r = i1;

	r = 30;

	set(i1);

	int* p = nullptr;

	p = &i1;


	cout << &i1 << endl;
	cout << &r<< endl;
	cout << p << endl;
}