#include <iostream>
#include <string>
using namespace std;

int main(int argc,char** argv){
	string inputstr;
	std::cout << "Bitte Namen eingeben:";
	getline(cin,inputstr);
	std::cout << "Hallo " << inputstr;
	return 0;
}