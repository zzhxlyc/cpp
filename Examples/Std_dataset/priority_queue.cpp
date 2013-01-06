#include <queue>
#include <iostream>
using namespace std;

/*
默认用vector实现
*/

struct PH{
	int ph;
	bool operator< (const PH& p) const {
        return ph > p.ph;
    }
};

// return < 是最大堆, return > 是最小堆
struct CMP{
	bool operator () (PH *p1, PH *p2){
		return p1->ph < p2.ph;
	}
};

//必须有<符号的重写
void priority_queue_obj(){
	priority_queue<PH> p;

	priority_queue<PH*, vector<PH*>, CMP> pq;	//若是存指针，则无法使用对象重载的<符号判断，需要另定义比较函数，第三个参数用类名
}

void priority_queue_init(){
	priority_queue<int> qp;
	qp.push(1);
	qp.push(5);
	qp.push(7);
	qp.push(2);
	cout<< "size : " << qp.size() << endl;

	for(priority_queue<int>::size_type size = qp.size(); size > 0; size--){
		cout<< qp.top() << " ";
		qp.pop();
	}
}

int priority_queue_main(){
	priority_queue_init();
	getchar();
	return 0;
}
