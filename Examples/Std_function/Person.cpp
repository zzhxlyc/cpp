#include "Person.h"

Person::Person():name(""), age(0){ //��ʼ�������б������ĳ�ʼ����������û��Ĭ�Ϲ��캯����ʱ�򣬻��߲���Ϊconst�ģ��ͱ���ʹ�ó�ʼ�������б�
}

Person::Person(string name, int age){ //��ʵname��age�Ѿ�����ʼ����string����Ĭ�Ϲ���int��Ϊ0����Ȼ�����±�����Ϊ������ֵ
	this->name = name;
	this->age = age;
}

//��������
Person::Person(const Person &person):name(person.name), age(person.age){
}

Person::~Person(void){
}

//���ⲿ����ҪҲ����ʹ��static�ؼ���
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
