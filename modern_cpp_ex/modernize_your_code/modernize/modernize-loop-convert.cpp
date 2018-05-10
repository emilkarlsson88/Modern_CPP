#include<array>
#include<iostream>
#include<vector>
int main() {
	// modernize-loop-convert
	std::array<int,3> arr = { 1, 2, 3 };
	for (int i = 0; i < 3; ++i) {
		std::cout << arr.at(i) << " ";
	}
	std::cout << '\n';
	std::vector<int> vec = { 1, 2, 3 };
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << '\n';
}
