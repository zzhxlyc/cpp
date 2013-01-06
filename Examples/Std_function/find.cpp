#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include "Person.h"
using namespace std;

/*
findʹ��==���������ң����Զ���Ҫ֧��==������һ���primitive����

�ҵ��򷵻��Ǹ�iterator��û���ҵ��򷵻�find�����ĵڶ���ʵ�Σ��ڱ���
*/

//�º���(functor)������д()��������ʹ��
struct ObjectEqual : public unary_function<Person &, bool> { 
	bool operator () (Person& p) { 
		return p.getName() == "stariy";
	} 
}; 

struct SortByName { 
	bool operator () (const Person& p1, const Person& p2) { 
		return p1.getName() < p2.getName();
	} 
}; 

//�ҵ���һ�������Զ���������Ԫ��
void find_if_test(){
	vector<Person> list = Person::getVector();
	vector<Person>::iterator find_it = find_if(list.begin(), list.end(), ObjectEqual());
	if(find_it != list.end()){
		cout<<"find it"<<endl;
	}
	else{
		cout<<"not found"<<endl;
	}
}

//find the first element in NO.1 container where it also in the No.2 container��Ĭ��ʹ��==�Ƚϣ��ɴ�����������
void find_first_of_test(){
	string s1 = "hello world";
	string s2 = "zju happy year";
	string::iterator it = s1.begin();
	while((it = find_first_of(it, s1.end(), s2.begin(), s2.end())) != s1.end()){
		cout<<*it<<" ";
		it++;
	}
}

void binary_search_test(){
	vector<Person> list = Person::getVector();
	sort(list.begin(), list.end(),SortByName());
	cout<<binary_search(list.begin(), list.end(), Person("stariy",1), SortByName())<<endl;
}

//search_end()��ͬsearch()
void find_end_test(){

}

void find_main(){
	//find_if_test();
	//find_first_of_test();
	binary_search_test();
}