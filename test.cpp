#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
	string s1;
	ifstream in("hello.cc");
	ofstream out("out.cc");
	while(getline(in,s1)){
		  out<<s1<<'\n';
	}
	int num;
	
	int add;

	
}
