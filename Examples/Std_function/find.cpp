#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include "Person.h"
using namespace std;

/*
find使用==来遍历查找，所以对象要支持==操作，一般对primitive操作

找到则返回那个iterator，没有找到则返回find函数的第二个实参（哨兵）
*/

//仿函数(functor)，类重写()当做函数使用
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

//找到第一个符合自定义条件的元素
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

//find the first element in NO.1 container where it also in the No.2 container，默认使用==比较，可传入第五个参数
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

//search_end()，同search()
void find_end_test(){

}

void find_main(){
	//find_if_test();
	//find_first_of_test();
	binary_search_test();
}