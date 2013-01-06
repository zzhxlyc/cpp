#include <iostream>
using namespace std;

/*
泛型算法的API，形参都是iterator，范围[first, last)，last做哨兵用，然后带1个或2个比较的value_type

容器用begin()和end()作参数，数组用( 数组名+begin, 数组名+end )

放object的容器，cmp函数的形参为引用；放指向object指针的容器，cmp函数的形参为指针
*/

extern void sort_main();
extern void find_main();
extern void insert_main();
extern void others_main();

int main(){
	//find_main();
	//sort_main();
	//insert_main();
	others_main();
	getchar();
	return 0;
}