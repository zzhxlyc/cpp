#include <queue>
#include <iostream>
using namespace std;

/*
Ĭ����vectorʵ��
*/

struct PH{
	int ph;
	bool operator< (const PH& p) const {
        return ph > p.ph;
    }
};

// return < ������, return > ����С��
struct CMP{
	bool operator () (PH *p1, PH *p2){
		return p1->ph < p2.ph;
	}
};

//������<���ŵ���д
void priority_queue_obj(){
	priority_queue<PH> p;

	priority_queue<PH*, vector<PH*>, CMP> pq;	//���Ǵ�ָ�룬���޷�ʹ�ö������ص�<�����жϣ���Ҫ����ȽϺ���������������������
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
