#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std; 

void itc_first_end_three(string str) {
	int len = itc_len(str);
	char w1 = str[0];
	char w2 = str[1];
	char w3 = str[2];
	if (len > 5) {
		cout << w1 << w2 << w3 << endl;
		cout << str[len - 1] << str[len - 2] << str[len - 3];
	}
	else {
		for (int i = 1; i <= len; i++) {
			cout << w1;
		}
	}
}

int itc_count_char_in_str(char ch, string str) {
	int num = 0;
	for (int i = 0; i < itc_len(str); i++) {
		if (str[i] == ch) num++;
	}
	return num;
}
