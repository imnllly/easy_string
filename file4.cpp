#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;


string itc_slice_str(string str, int start, int end) {
	string result = "";
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
