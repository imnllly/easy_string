#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;

// проверить пустую строку
string itc_slice_str(string str, int start, int end) {
	string result = "";
	int len = itc_len(str);
	if (end > len) end = len;
	if (end < start) return str;
	for (int i = start; i <= end; i++) {
		result += str[i];
	}
	return result;
}


bool itc_equal_reverse(string str) {
	if (str == itc_reverse_str(str)) return 1;
	return 0;
}

// доделать функцию !!
string itc_cmp_str(string str1, string str2, int num) {
	num--;
	string str_new{};
	for (int i = 0; i < itc_len(str1); i++) {
		str_new += str1[i];
		if (i == num) str_new += str2;
	}
	return str_new;
} 
