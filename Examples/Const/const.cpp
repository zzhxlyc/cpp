#include "object.h"

void const_variable(){
	const int a = 5;//const变量必须初始化，而后不能再赋值
}

//const引用 = 指向const的引用；引用本身是const的，所以定义时必须初始化
void const_reference(){
	int a = 5;
	int &ra1 = a;				//ra1为变量a的引用，可以读写变量a
	const int &ra2 = a;			//ra2为变量a的const引用，可读不可写
	const int &ra3 = ra2 + 1;	//const引用的计算结果只能赋给const引用
	//int &ra3 = ra2 + 1;		//编译错误，不能将const的结果赋给非const的引用

	const int b = 10;
	const int &rb = b;			//const变量只能赋给const引用，保证可读不可写
	//int &rb = b;				//编译错误，不能将const的结果赋给非const的引用

	//不同类型对象的引用传递，包含一个中间过程，即double c = 12.5;int temp = c;const int &rc = temp，代码中实际操控不了temp对象
	double c = 12.5;
	const int &rc = c;			//const引用可以在不同类型变量之间使用，rc = 12，丢失小数部分。产生一个warning
	//int &rc = c;				//编译错误，非const引用则不可以
}

void const_pointer(){
	int a = 5;
	const int *pa = &a;			//const修饰int，是指向const int的指针，只读，但可以修改指向（改变指针本身）

	const int b = 10;
	const int *pb = &b;			//const对象必须用指向const的指针
	const int *pbb;				//指向const的指针可以不被初始化，因为本身并不const
	//*pbb = b;					//编译错误，不能修改const对象（虽然还并没有真正指向一个const对象），初始化只能给地址
	pbb = &b;					//ok的初始化

	int c = 15;
	int *const pc = &c;			//const指针（指针本身是const的），不能修改指向；但对对象c可读可写
	(*pc)++;
	//int *const pcc;			//而const指针必须定义时就被初始化，因为其本身为const

	const int d = 20;
	const int *const pd = &d;	//指向const的const指针，双重const；相当于const引用了
	
	const double pi = 3.14;
	const void* pp = &pi;		//const对象的地址需要const void* 指针来保存
}

//指向指针的引用，因为引用不可变，所以强制规定指针也不可变才行
void const_reference_to_pointer(){
	int a = 1;
	int *p = &a;				//指针的赋值
	int *const &r = &a;			//因为r是指向a的指针的一个引用，r不可变所以要求指针需要const指针

	const int b = 1;
	const int *const &s = &b;	//ok，表明s所指的值为const
}

int main(){
	const_pointer();
	getchar();
	return 0;
}