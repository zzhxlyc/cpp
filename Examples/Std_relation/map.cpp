#include <iostream>
#include <map>
#include <string>
#include <utility>
using namespace std;

/*
 * map用tree实现，所以需要用<号来作为比较，所以键类型必须支持"<"操作
*/

struct S{
	int x, y, step;
	friend bool operator < (S s1, S s2){
		if(s1.x != s2.x) return s1.x < s2.x;
		else if(s1.y != s2.y) return s1.y < s2.y;
		else return s1.step < s2.step;
	}
};
struct SS{
	int x, y, step;
};
struct CMP{
	bool operator () (const SS &s1, const SS &s2) const{
		if(s1.x != s2.x) return s1.x < s2.x;
		else if(s1.y != s2.y) return s1.y < s2.y;
		else return s1.step < s2.step;
	}
};
map<S, int> m1;
map<SS, int ,CMP> m2;


//insert当key存在则不插入，m[key] = value访问当key不存在，则插入此key与value
void map_insert(){
	map<string, int> m;
	m["stariy"] = 22;
	m.insert(make_pair("navi",21));
	m.insert(make_pair("lam",20));

	string key = "stariy";
	if(m.count(key) > 0){
		cout<<key<<" : "<<m[key]<<endl;
	}
	else{
		cout<<"no key : "<<key<<endl;
	}

	int del_num = m.erase(key);

	map<string, int>::iterator find_it = m.find(key);
	if(find_it != m.end()){
		cout<<find_it->first<<" : "<<find_it->second<<endl;
	}
	else{
		cout<<"no key : "<<key<<endl;
	}

	for(map<string, int>::iterator map_it = m.begin();map_it != m.end();map_it++){
		pair<string, int> entry = *map_it;
		cout<<map_it->first<<" "<<entry.second<<endl;
	}
}

