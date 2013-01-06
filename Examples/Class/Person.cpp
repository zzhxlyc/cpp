#include "Person.h"

Person::Person():name(""), age(0){ //初始化参数列表，真正的初始化。当参数没有默认构造函数的时候，或者参数为const的，就必须使用初始化参数列表
}

Person::Person(string name, int age){ //其实name和age已经被初始化（string调用默认构造int赋为0），然后重新被复制为参数的值
	this->name = name;
	this->age = age;
}

//拷贝构造
Person::Person(const Person &person):name(person.name), age(person.age){
}

Person::~Person(void){
}

//类外部不需要也不能使用static关键字
const string Person::CLASS_NAME = "Person";

Person* Person::getInstance(){
	return new Person();
}


vector<Person> Person::getVector(){
	int age[10] = {1,41,9,23,2,100,56,34,3,50};
	string name[10] = {"peggy","nancy","stariy","kid","cerror","quark","naoz","fire","mike","watashi"};
	int length = sizeof(age) / sizeof(int);
	vector<Person> *list = new vector<Person>();

	for (int i = 0;i < length; ++i) {
		list->push_back(Person(name[i], age[i]));
	}

	return *list;
}

string Person::getName() const{
	return this->name;
}

void Person::setName(string name){
	this->name = name;
}

int Person::getAge() const{
	return this->age;
}

void Person::setAge(int age){
	this->age = age;
}
