#include <iostream>
using namespace std;

//��ά����[����=ÿ�и���][����=ÿ�и���]
void init_bigArray(){
	int bigArray[2][3] = {
		{1,2,3},
		{4,5,6},
	};
	int bigArray1[2][3] = {{1},{2}};				//ֻ��ʼ��ÿ�еĵ�һ��������{{1,0,0},{2,0,0}}
	int bigArray2[2][3] = {1,2,3};					//ֻ��ʼ����һ�е�3����������ȫΪ0
	int bigArray3[][3] = {1,2,3,4,5,6};
	//int bigArray4[2][] = {1,2,3,4,5,6};			//error�����ά�����С����ʡ��

	//bigArray[0] = {1,2,3};bigArray[1] = {4,5,6};	//���±꣬������������
}

void bigArray_pointer(){
	int bigArray[2][3] = {
		{1,2,3},
		{4,5,6},
	};
	
	int *p1 = &bigArray[0][0];				//p��һ��intָ�룬��ֵΪarray[1][0]���intֵ�ĵ�ַ��Ҫȡ��ַ;ָ�����㰴int��
	cout<<*p1<<" ";cout<<*(++p1)<<endl;		//1 2

	int *p2 = bigArray[0];					//p��һ��intָ�룬��ֵΪarray[1]�����һά�����������������׵�ַ;ָ�����㰴int��
	cout<<*p2<<" ";cout<<*(++p2)<<endl;		//1 2

	int *p3[3] = {bigArray[0],bigArray[1],&bigArray[0][0]};			//intָ������飬һ������3��intָ�������
	cout<<*(++p3[0])<<" "<<*p3[1]<<" "<<*p3[2]<<endl;				//2 4 1

	int (*p)[3] = bigArray;											//һ��ָ�������ָ�룬pΪbigArray��ָ��
	cout<<p[0][0]<<" "<<p[1][0]<<" "<<p[1][2]<<endl;				//1 4 6
}

int main(){
	bigArray_pointer();
	getchar();
	return 0;
}