#include <iostream>
#include <string>
#include <vector>
#include <iterator>

int main() {

	std::vector<std::string> str_vec {};

	// No STL
	str_vec.push_back("Hey");
	str_vec.push_back("there, ");
	str_vec.push_back("partner!");
	
	std::cout << "Without STL: " << std::endl;
	for(auto &str : str_vec) {
		std::cout << str << std::endl;
	}	

	std::cout << std::endl;

	// Using STL
	std::cout << "With STL: " << std::endl;
	for(std::vector<std::string>::iterator it = str_vec.begin(); it != str_vec.end(); it++) {
		std::cout << *it << std::endl;
	}	
	return 0;
}
