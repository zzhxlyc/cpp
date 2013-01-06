#include <stack>
#include <vector>
#include <iostream>
using namespace std;

/*
stack和queue只是适配器接口，默认用deque实现
*/

void stack_init(){
	stack<int> s1;

	stack<int, vector<int> > s2;	//改变stack默认的deque实现，改用vector实现，只要是连续存储的结构都可以

}

int stack_main(){
	stack_init();
	getchar();
	return 0;
}
