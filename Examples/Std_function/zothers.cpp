#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

struct UniqueBinary : public binary_function<int, int, bool>{
	bool operator() (int a, int b){		//ɾȥ�ظ�Ԫ�ػ��ظ��� >5 ��Ԫ��
		if(a == b) return true;
		else if(b > 5){
			return true;
		}
		else
			return false;
	}
};

//uniqueʹ��<�Ƚ�Ԫ�أ�������������������Ϲ�����
void unique_test(){
	vector<int> vi;
	int num[] = {1,2,1,3,4,5,3,6};
	int size = sizeof(num) / sizeof(int);
	for(int i = 0;i < size;i++){
		vi.push_back(num[i]);
	}
	
	//unique֧��һ����Ԫν�ʣ�����trueʱ�ڶ��������ᱻ�����ظ�Ԫ��
	sort(vi.begin(), vi.end());
	vector<int>::iterator new_end = unique(vi.begin(), vi.end(), UniqueBinary());
	for(int i = 0;i < vi.size();i++){
		cout<<vi[i]<<" ";
	}
	cout<<endl;

	vi.erase(new_end, vi.end());
	for(int i = 0;i < vi.size();i++){
		cout<<vi[i]<<" ";
	}
	cout<<endl;
}

void next_permutation_test(){
	string str = "abc";
	cout << "abc" << endl;
	while(next_permutation(str.begin(), str.end())){
		copy(str.begin(), str.end(), ostream_iterator<char>(cout, ""));
		cout<<endl;
	}
}

void others_main(){
	//unique_test();
	next_permutation_test();
}