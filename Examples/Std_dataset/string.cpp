#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/*
��׼����string���ַ�������ֵ����˫�������ݣ���ȫ��ͬ
�ַ�������ֵ����C�����Ĭ�ϴ�\0������������+����2��˫�����ַ���

string�൱��vector<charT>��ӵ��vector��API
*/

void init(){
	string s1("hello");
	string s2 = "world";
	string s3(5,'a');					//"aaaaa"

	//char to string
	string s4;
	s4.push_back('a');
	s4 += 'b';
	cout<<s4<<endl;

	//int to string
	int i = 100;
	char temp[10];
	
	//one
	sprintf(temp, "%d", i);
	string s5(temp);

	//two, _itoa(int, char[], int����)
	_itoa(i, temp, 10);
	string s6(temp);

	//three, stringstream
	stringstream ss;  
	ss<<i;  
	string s7 = ss.str();

	string sa = s1 + " " + s2 + "\n";	//+ֻ֧��string�����루string������ֵ��������
	//string sa = "hello" + " world";	//error, '+' : cannot add two pointers
}

void cString(){
	string s("hello world");
	const char *ss = s.c_str();		//\0 at last

	const char *chars = s.data();	//no \0 at last
}

void size(){
	string s("hello world");
	string::size_type size = s.size();	//size_type����size_t������������й�
	cout<<size<<endl;

	for(string::size_type i = 0;i < size;i++)
		cout<<s[i];
}

void compare(){
	string s1("hello"), s2("world");
	if(s1 > s2)							//���÷��űȽ��ַ����ֵ���ֵ
		cout<<"h"<<endl;
	else
		cout<<"w"<<endl;

	if(s1.compare(s2) == 0)
		cout<<"equal";
	else
		cout<<"not equal";

	
}

void find(){
	string s = "hello, world";

	//find string
	cout<<s.find("hello")<<endl;	//0
	cout<<s.find("gello")<<endl;	//4294967295
	cout<<((int)s.find("gello"))<<endl;	//-1

	int ret = s.find("gello");
	if(ret > 0)						//����  if(s.find("gello") > 0), find()û�ҵ��ķ��ؽ����unsigned��-1
		cout<<"find"<<endl;
	else
		cout<<"no find"<<endl;

	if(s.find("gello") == -1)		//�������ǿ��Ե�
		cout<<"no find"<<endl;
	else
		cout<<"find"<<endl;

	//find char
	cout<<s.find('l')<<endl;

	//find ��ƥ���
	cout<<s.find_first_not_of("hello,world")<<endl;	//6
}

void action(){
	string s = "hello, world";
	cout<<s.substr(0u, 5u)<<endl;
	cout<<s.substr(1)<<endl;

	cout<<s.replace(4, 5, "HELLO")<<endl;	//replace(begin, length, string)
}

int string_main(){
	//init();
	//cString();
	//compare();
	find();
	//action();
	getchar();
	return 0;
}
