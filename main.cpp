#include <iostream>
#include <map>
#include <string>

bool bAnagram(std::string& str_1, std::string& str_2) {
	std::map<int, char> oStr_1, oStr_2;
	if (str_1.length() != str_2.length()) {
		return false;
	} else {
		for (int i = 0; i < str_1.length(); i++) {
			std::pair<int, char> oPair_1;
			oPair_1.first = i;
			oPair_1.second = str_1[i];
			oStr_1.insert(oPair_1);
			std::pair<int, char> oPair_2;
			oPair_2.first = i;
			oPair_2.second = str_2[i];
			oStr_2.insert(oPair_2);
		}
	}
}

int main() {
	std::string str_1, str_2;

	std::cout << "Input two strings to check for anagrams:" << std::endl;
	std::cin >> str_1 >> str_2;
	bAnagram(str_1, str_2);
}
