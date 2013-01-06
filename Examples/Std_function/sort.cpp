#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Person.h"
using namespace std;

/*
��������ڴ����ļ�¼�������Ҫ�����¼��������ָ�����ǵ�ָ�롣

sortʹ���Ż����quicksort(�ر���Ի������������)�����ܱ�֤��ͬԪ��������λ�ã�ͨ���ٶ����
stable_sortʹ��mergesort������ʱ����ȶ����ұ�֤��ͬԪ�������λ�ò���
partial_sort ����ֻ�����ǰN��Ԫ��
list::sort()����ָ�룬�����ǿ���Ԫ��
*/

//  < is increasing
struct PersonCmp{
	bool operator ()(const Person &p1, const Person &p2){
		return p1.getAge() < p2.getAge();
	}
};

/*void is_sorted_test(){
	vector<Person> list = Person::getVector();
	cout<<is_sorted(list.begin(), list.end(), PersonCmp())<<endl;
	sort(list.begin(), list.end(), PersonCmp());
	cout<<is_sorted(list.begin(), list.end(), PersonCmp())<<endl;
}*/

void sort_container(){
	cout<<"sort_container\n"<<endl;
	
	vector<Person> list = Person::getVector();

	sort(list.begin(), list.end(), PersonCmp());

	for (vector<Person>::size_type i = 0;i < list.size(); ++i) {
		Person *p = &list.at(i);
		cout << p->getName() << " " << p->getAge() << endl;
	}
}

void sort_array(){
	cout<<"sort_array\n"<<endl;
	int age[10] = {1,41,9,23,2,100,56,34,3,50};
	string name[10] = {"peggy","nancy","stariy","kid","cerror","quark","naoz","fire","mike","watashi"};
	int length = sizeof(age) / sizeof(int);

	Person p_array[10];
	
	for (int i = 0;i < length; ++i) {
		Person *p = &p_array[i];
		p->setName(name[i]);
		p->setAge(age[i]);
	}

	sort(p_array, p_array + length, PersonCmp());

	for (int i = 0;i < length; ++i) {
		Person *p = &p_array[i];
		cout << p->getName() << " " << p->getAge() << endl;
	}
}

void head_sort_test(){
	int A[] = {1, 4, 2, 8, 5, 7};
	const int N = sizeof(A) / sizeof(int);

	make_heap(A, A+N);
	cout << "Before pop: ";
	copy(A, A+N, ostream_iterator<int>(cout, " "));
	cout<<endl;

	sort_heap(A, A+N);
	copy(A, A+N, ostream_iterator<int>(cout, " "));
	cout<<endl;
}

void sort_main(){
	//sort_container();
	//sort_array();
}

