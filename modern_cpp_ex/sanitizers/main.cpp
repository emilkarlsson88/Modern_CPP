#include<string>
#include<iostream>
int main() {
	const char* names[] = {"Emil", "Karlsson"};
	std::string last_name = names[3];
	std::cout << last_name.size() << '\n';
	return 0;
}
