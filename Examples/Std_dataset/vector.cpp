#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> intV;

void initVector(){
	for(int i = 0;i < 10;i++){
		intV.push_back(i);
	}
}

void printAll(vector<int>::iterator begin, vector<int>::iterator end){
	vector<int>::difference_type diff = end - begin;
	cout<<"vector size is : "<<diff<<endl;

	vector<int>::const_iterator it = begin;
	while(it != end){
		cout<<*it<<" ";
		it++;
	}
	cout<<endl;
}

//front() back() at(n) [n] 返回的都是引用
void visitVector(){
	cout<<intV.front()<<" "<<intV.back()<<" "<<intV.at(intV.size()/2)<<endl;
}

//pop_back() is void
void deleteVector(){
	if(intV.size() != 0){
		intV.pop_back();
		vector<int>::iterator it = intV.begin() + intV.size() / 2;
		intV.erase(it);
		printAll(intV.begin(), intV.end());
	}
	intV.clear();
	intV.erase(intV.begin(), intV.end());
}

//同数组的size_t
void sizeType(){
	vector<int>::size_type size = intV.size();
	for(vector<int>::size_type i = 0;i < size;i++){
		cout<<intV[i]<<" ";
	}
}

int vector_main(){
	initVector();
	//printAll(intV.begin(), intV.end());
	//sizeType();
	//visitVector();
	deleteVector();
	getchar();
	return 0;
}
