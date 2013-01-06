#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

//�����ռ�����Ѿ����ڣ�����ʹ����������fill������insert
void fill_test(){
	vector<int> vi(10);

	if(vi.size() >= 10)
		fill(vi.begin(), vi.end(), 10);

	//fill_n��ִ�б߽��飬���Կ��ܻ�Խ��
	if(vi.size() >= 5)
		fill_n(vi.begin(), 5, 20);

	for(int i = 0;i < 10;i++){
		cout<<vi[i]<<" ";
	}
}

//back_inserter����push_back()������Ԫ��
//front_inserter����push_front()��ǰ����Ԫ��
//inserter����Ҫ��һ����ʼλ�õĵ�������Ȼ��������Ԫ��
void insert_test(){
	vector<int> vi;
	int num = 10;
	int value = 5;
	fill_n(back_inserter(vi), num, value);

	for(int i = 0;i < num;i++){
		cout<<vi[i]<<" ";
	}
}

void insert_main(){
	//fill_test();
	insert_test();
}