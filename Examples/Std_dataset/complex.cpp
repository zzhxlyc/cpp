#include <iostream>
#include <cstdio>
#include <sstream>
#include <complex>
using namespace std;

void init(){
	complex<double> c(3.0, 4.0), c1;

	stringstream ss;
	ss << "(4, 3)";
	ss >> c1;

	cout<<c<<" "<<c1<<endl;
}

void func(){
	complex<double> c(3, 4);
	int real = c.real();
	int imag = c.imag();
}

int main(){
	init();
	return 0;
}

