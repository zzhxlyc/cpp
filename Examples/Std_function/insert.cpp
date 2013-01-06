#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

//容器空间必须已经存在，不能使空容器，是fill而不是insert
void fill_test(){
	vector<int> vi(10);

	if(vi.size() >= 10)
		fill(vi.begin(), vi.end(), 10);

	//fill_n不执行边界检查，所以可能会越界
	if(vi.size() >= 5)
		fill_n(vi.begin(), 5, 20);

	for(int i = 0;i < 10;i++){
		cout<<vi[i]<<" ";
	}
}

//back_inserter利用push_back()向后插入元素
//front_inserter利用push_front()向前插入元素
//inserter，还要给一个起始位置的迭代器，然后向后插入元素
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