#include <iostream>
#include <utility>
using namespace std;

/*
pari��first��second��Ա��public��
make_pair()����һ���µ�pair����
*/

void pair_init(){
	pair<int, int> p(1,1);
	p = make_pair(1,2);
	cout<<p.first<<" "<<p.second<<endl;
}

void pair_main(){
	pair_init();
}