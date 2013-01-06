#include <iostream>
#include <string>
using namespace std;

//动态分配的数组，new出来在堆上
void dynamicArray(){
	size_t size = 10;			//当size为0时，new一个动态数组依然成功，但是返回的指针不指向任何对象，不能用*操作
	int *a1 = new int[size];	//未初始化的数组，内置无初始化，类调默认构造
	int *a2 = new int[size]();	//初始化后的数组，内置为0，类调默认构造

	const string *s = new const string[10]();	//const动态数组的定义，由于内容const所以必须初始化，若为类对象则必须有默认构造

	for(int i = 0;i < 10;i++)
		cout<<a2[i]<<endl;

	delete[] a1, a2, s;			//new出来的必须delete，否则内存泄露
}

int main2(){
	dynamicArray();
	getchar();
	return 0;
}