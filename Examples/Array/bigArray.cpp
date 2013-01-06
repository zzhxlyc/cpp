#include <iostream>
using namespace std;

//二维数组[行数=每列个数][列数=每行个数]
void init_bigArray(){
	int bigArray[2][3] = {
		{1,2,3},
		{4,5,6},
	};
	int bigArray1[2][3] = {{1},{2}};				//只初始化每行的第一个数，即{{1,0,0},{2,0,0}}
	int bigArray2[2][3] = {1,2,3};					//只初始化第一行的3个数，其余全为0
	int bigArray3[][3] = {1,2,3,4,5,6};
	//int bigArray4[2][] = {1,2,3,4,5,6};			//error，最低维数组大小不能省略

	//bigArray[0] = {1,2,3};bigArray[1] = {4,5,6};	//单下标，索引到子数组
}

void bigArray_pointer(){
	int bigArray[2][3] = {
		{1,2,3},
		{4,5,6},
	};
	
	int *p1 = &bigArray[0][0];				//p是一个int指针，赋值为array[1][0]这个int值的地址，要取地址;指针运算按int跳
	cout<<*p1<<" ";cout<<*(++p1)<<endl;		//1 2

	int *p2 = bigArray[0];					//p是一个int指针，赋值为array[1]这个子一维数组名，数组名即首地址;指针运算按int跳
	cout<<*p2<<" ";cout<<*(++p2)<<endl;		//1 2

	int *p3[3] = {bigArray[0],bigArray[1],&bigArray[0][0]};			//int指针的数组，一个放了3个int指针的数组
	cout<<*(++p3[0])<<" "<<*p3[1]<<" "<<*p3[2]<<endl;				//2 4 1

	int (*p)[3] = bigArray;											//一个指向数组的指针，p为bigArray的指针
	cout<<p[0][0]<<" "<<p[1][0]<<" "<<p[1][2]<<endl;				//1 4 6
}

int main(){
	bigArray_pointer();
	getchar();
	return 0;
}