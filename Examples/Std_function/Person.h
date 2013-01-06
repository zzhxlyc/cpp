#include <string>
#include <vector>
using namespace std;

//在类内部定义的函数默认为 inline

class Person{
private:
	string name;
	int age;
	mutable int num; //可变数据成员，const成员函数也可以修改
public:
	Person(void);
	Person(string name, int age);
	//将拷贝构造定义为private，可以避免被复制
	Person(const Person &person);
	virtual ~Person(void);

	static const string CLASS_NAME;
	static Person* getInstance();
	static vector<Person> getVector();

	string getName() const;	//成员函数后加const表明此成员函数不会修改类对象的属性，比如getXXX()一般都带const,构造函数不能为const
	void setName(string name);
	int getAge() const;
	void setAge(int age);
};
