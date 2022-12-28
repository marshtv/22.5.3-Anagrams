#include <iostream>
#include <map>
#include <string>

bool bAnagram(std::string& str_1, std::string& str_2) {
	std::map<char, int> oStr_1, oStr_2;
	std::pair<char, int> oPair_1, oPair_2;
	if (str_1.length() != str_2.length()) {
		return false;
	} else {
		for (int i = 0; i < str_1.length(); i++) {
			oPair_1.first = str_1[i];
			oPair_1.second = i;
			oStr_1.insert(oPair_1);
			oPair_2.first = str_2[i];
			oPair_2.second = i;
			oStr_2.insert(oPair_2);
		}
		std::map<char, int>::iterator it_2 = oStr_2.begin();
		for (std::map<char, int>::iterator it_1 = oStr_1.begin(); it_1 != oStr_1.end(); it_1++) {
			if (it_1->first != it_2->first)
				return false;
			else
				it_2++;
		}
	}
	return true;
}

int main() {
	std::string str_1, str_2;

	std::cout << "Input two strings to check for anagrams:" << std::endl;
	std::cin >> str_1 >> str_2;

	if (bAnagram(str_1, str_2))
		std::cout << "This strings are anagrams!" << std::endl;
	else
		std::cout << "This strings are not anagrams!" << std::endl;
}
