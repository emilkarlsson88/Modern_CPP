#include<iostream>
int main() {
	// modernize-use-bool-literals
	bool flag = false;
	bool action = flag ? 1 : 0;
	std::cout << std::boolalpha  << action << '\n';
}
