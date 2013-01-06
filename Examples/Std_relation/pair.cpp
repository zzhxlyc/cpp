#include <iostream>
#include <utility>
using namespace std;

/*
pari的first和second成员是public的
make_pair()返回一个新的pair对象
*/

void pair_init(){
	pair<int, int> p(1,1);
	p = make_pair(1,2);
	cout<<p.first<<" "<<p.second<<endl;
}

void pair_main(){
	pair_init();
}