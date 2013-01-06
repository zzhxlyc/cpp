#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void readFile(){
	ifstream infile;
	infile.open("test.txt");
	if(infile){
		string s;
		while(getline(infile, s)){
			cout << s << endl;;
		}
	}
	infile.close();
}

void writeFile(){
	ofstream outfile;
	outfile.open("out.txt");
	if(outfile){
		string s = "hello world!";
		outfile << s;
	}
	outfile.close();
}

int main(){
	readFile();
	//writeFile();
	getchar();
	return 0;
}
