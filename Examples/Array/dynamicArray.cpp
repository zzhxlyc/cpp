#include <iostream>
#include <string>
using namespace std;

//��̬��������飬new�����ڶ���
void dynamicArray(){
	size_t size = 10;			//��sizeΪ0ʱ��newһ����̬������Ȼ�ɹ������Ƿ��ص�ָ�벻ָ���κζ��󣬲�����*����
	int *a1 = new int[size];	//δ��ʼ�������飬�����޳�ʼ�������Ĭ�Ϲ���
	int *a2 = new int[size]();	//��ʼ��������飬����Ϊ0�����Ĭ�Ϲ���

	const string *s = new const string[10]();	//const��̬����Ķ��壬��������const���Ա����ʼ������Ϊ������������Ĭ�Ϲ���

	for(int i = 0;i < 10;i++)
		cout<<a2[i]<<endl;

	delete[] a1, a2, s;			//new�����ı���delete�������ڴ�й¶
}

int main2(){
	dynamicArray();
	getchar();
	return 0;
}