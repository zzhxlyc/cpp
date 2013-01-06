#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

int main(){
	Person p = Person("lyc", 5);
	string name = p.getName();
	cout<<p.CLASS_NAME<<" "<<name<<" "<<p.getAge()<<endl;
	getchar();
	return 0;
}