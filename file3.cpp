#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;


string itc_even_place(string str) {
	string str2{};
	for (int i = 0; str[i] != '\0'; i++) {
		if (i % 2 == 1) str2 += str[i];
	}
	return str2;
}

double itc_percent_lower_uppercase(string str) {
	double per = 0;
	double s = 0;
	double p = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') s++;
		else if (str[i] >= 'A' && str[i] <= 'Z') p++;
	}
	return p / s;
}

string itc_reverse_str(string str) {
	int len = itc_len(str);
	string str2{};
	for (int i = len - 1; i >= 0; i--) {
		str2 += str[i];
	}
	return str2;
}
