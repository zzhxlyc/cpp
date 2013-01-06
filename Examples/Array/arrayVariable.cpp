#include <iostream>
using namespace std;

//申明数组大小的值只能是在编译期间即可算的结果的数值
void definition(){
	//valid
	int array1[10];
	const int size = 10;	int array2[size];	int array3[size + 10];

	//invalid
	//int size = 10;	int intArray[size];		//size是可变的变量，未到runtime也不能得知最终结果
	//const int size = getSizeInRuntime();	int array4[size];	//const变量size未到runtime也不能得知最终结果
}

int outsideArray[5];			//函数体外的内置类型数组，其元素初始化为0;类类型用默认构造初始化
void initialize(){
	int insideArray[5];			//函数体内的内置类型数组，其元素不自动初始化;类类型用默认构造初始化
	
	//使用初始化列表来初始化数组，若给的值少于数组大小，剩下的都默认为0或用默认构造初始化
	int array0[] = {1,2,3,0,0};	//可以不指定数组大小，按初始化列表长度计算
	int array1[5] = {1,2,3};	//指定数组大小后，初始化列表长度必须<=数组大小，未给出值部分，普通类型赋为0，类类型用默认构造初始化

	//字符数组，特殊初始化
	char cArray[] = "lyc";		//cArray is ['l','y','c','\0']，4个元素，包括\0
	//char cArray1[3] = "lyc";	//编译错误，array bounds overflow
}

void length(){
	int a[5];
	int length = sizeof(a) / sizeof(*a);
	cout<<length<<endl;
}

int main1(){
	getchar();
	return 0;
}