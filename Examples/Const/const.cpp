#include "object.h"

void const_variable(){
	const int a = 5;//const���������ʼ�����������ٸ�ֵ
}

//const���� = ָ��const�����ã����ñ�����const�ģ����Զ���ʱ�����ʼ��
void const_reference(){
	int a = 5;
	int &ra1 = a;				//ra1Ϊ����a�����ã����Զ�д����a
	const int &ra2 = a;			//ra2Ϊ����a��const���ã��ɶ�����д
	const int &ra3 = ra2 + 1;	//const���õļ�����ֻ�ܸ���const����
	//int &ra3 = ra2 + 1;		//������󣬲��ܽ�const�Ľ��������const������

	const int b = 10;
	const int &rb = b;			//const����ֻ�ܸ���const���ã���֤�ɶ�����д
	//int &rb = b;				//������󣬲��ܽ�const�Ľ��������const������

	//��ͬ���Ͷ�������ô��ݣ�����һ���м���̣���double c = 12.5;int temp = c;const int &rc = temp��������ʵ�ʲٿز���temp����
	double c = 12.5;
	const int &rc = c;			//const���ÿ����ڲ�ͬ���ͱ���֮��ʹ�ã�rc = 12����ʧС�����֡�����һ��warning
	//int &rc = c;				//������󣬷�const�����򲻿���
}

void const_pointer(){
	int a = 5;
	const int *pa = &a;			//const����int����ָ��const int��ָ�룬ֻ�����������޸�ָ�򣨸ı�ָ�뱾��

	const int b = 10;
	const int *pb = &b;			//const���������ָ��const��ָ��
	const int *pbb;				//ָ��const��ָ����Բ�����ʼ������Ϊ������const
	//*pbb = b;					//������󣬲����޸�const������Ȼ����û������ָ��һ��const���󣩣���ʼ��ֻ�ܸ���ַ
	pbb = &b;					//ok�ĳ�ʼ��

	int c = 15;
	int *const pc = &c;			//constָ�루ָ�뱾����const�ģ��������޸�ָ�򣻵��Զ���c�ɶ���д
	(*pc)++;
	//int *const pcc;			//��constָ����붨��ʱ�ͱ���ʼ������Ϊ�䱾��Ϊconst

	const int d = 20;
	const int *const pd = &d;	//ָ��const��constָ�룬˫��const���൱��const������
	
	const double pi = 3.14;
	const void* pp = &pi;		//const����ĵ�ַ��Ҫconst void* ָ��������
}

//ָ��ָ������ã���Ϊ���ò��ɱ䣬����ǿ�ƹ涨ָ��Ҳ���ɱ����
void const_reference_to_pointer(){
	int a = 1;
	int *p = &a;				//ָ��ĸ�ֵ
	int *const &r = &a;			//��Ϊr��ָ��a��ָ���һ�����ã�r���ɱ�����Ҫ��ָ����Ҫconstָ��

	const int b = 1;
	const int *const &s = &b;	//ok������s��ָ��ֵΪconst
}

int main(){
	const_pointer();
	getchar();
	return 0;
}