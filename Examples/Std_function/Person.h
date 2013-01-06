#include <string>
#include <vector>
using namespace std;

//�����ڲ�����ĺ���Ĭ��Ϊ inline

class Person{
private:
	string name;
	int age;
	mutable int num; //�ɱ����ݳ�Ա��const��Ա����Ҳ�����޸�
public:
	Person(void);
	Person(string name, int age);
	//���������춨��Ϊprivate�����Ա��ⱻ����
	Person(const Person &person);
	virtual ~Person(void);

	static const string CLASS_NAME;
	static Person* getInstance();
	static vector<Person> getVector();

	string getName() const;	//��Ա�������const�����˳�Ա���������޸����������ԣ�����getXXX()һ�㶼��const,���캯������Ϊconst
	void setName(string name);
	int getAge() const;
	void setAge(int age);
};
