#include <iostream>
using namespace std;

/*
�����㷨��API���βζ���iterator����Χ[first, last)��last���ڱ��ã�Ȼ���1����2���Ƚϵ�value_type

������begin()��end()��������������( ������+begin, ������+end )

��object��������cmp�������β�Ϊ���ã���ָ��objectָ���������cmp�������β�Ϊָ��
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