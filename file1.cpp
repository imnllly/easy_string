#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;

string itc_hello_str(string name) {
	cin >> name;
	return "Hello, " + name;
}

long long itc_len(string str) {
	cin >> str;
	return str.length();
}

void itc_print_copy_str(string str, int number) {
	cin >> str >> number;
	string str2 = str;
	for (int i = 1; i <= number; i++) {
		cout << str << endl;
	}
}