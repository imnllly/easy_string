#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;

string itc_slice_str(string str, int start, int end) {
	string result = "";
	int len = itc_len(str);
	if (len == 0) return "";
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

string itc_cmp_str(string str1, string str2, int num) {
	num--;
	long long len1 = itc_len(str1);
	long long len2 = itc_len(str2);
	string str_new{};
	for (int i = 0; i <= num; i++) {
		str_new += str1[i];
		if (i == num) str_new += str2;
	}
	num++;
	for (int j = itc_len(str_new); j < len1; j++) {
		str_new += str1[num];
		num++;
	}
	if (len2 > len1) {
		return itc_slice_str(str_new, 0, len1 - 1);
	} 
	return str_new;
}
