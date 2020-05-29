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

	return 0;
}
