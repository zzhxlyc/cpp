#include <iostream>
using namespace std;

//���������С��ֵֻ�����ڱ����ڼ伴����Ľ������ֵ
void definition(){
	//valid
	int array1[10];
	const int size = 10;	int array2[size];	int array3[size + 10];

	//invalid
	//int size = 10;	int intArray[size];		//size�ǿɱ�ı�����δ��runtimeҲ���ܵ�֪���ս��
	//const int size = getSizeInRuntime();	int array4[size];	//const����sizeδ��runtimeҲ���ܵ�֪���ս��
}

int outsideArray[5];			//��������������������飬��Ԫ�س�ʼ��Ϊ0;��������Ĭ�Ϲ����ʼ��
void initialize(){
	int insideArray[5];			//�������ڵ������������飬��Ԫ�ز��Զ���ʼ��;��������Ĭ�Ϲ����ʼ��
	
	//ʹ�ó�ʼ���б�����ʼ�����飬������ֵ���������С��ʣ�µĶ�Ĭ��Ϊ0����Ĭ�Ϲ����ʼ��
	int array0[] = {1,2,3,0,0};	//���Բ�ָ�������С������ʼ���б��ȼ���
	int array1[5] = {1,2,3};	//ָ�������С�󣬳�ʼ���б��ȱ���<=�����С��δ����ֵ���֣���ͨ���͸�Ϊ0����������Ĭ�Ϲ����ʼ��

	//�ַ����飬�����ʼ��
	char cArray[] = "lyc";		//cArray is ['l','y','c','\0']��4��Ԫ�أ�����\0
	//char cArray1[3] = "lyc";	//�������array bounds overflow
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