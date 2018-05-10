#include<vector>
#include<iostream>
#include<utility>
int main() {
	// modernize-use-emplace
	std::vector<std::pair<int,int>> vecPar;
	vecPar.push_back(std::make_pair(1,2));
	vecPar.push_back(std::make_pair(3,4));
	vecPar.push_back(std::make_pair(5,6));
	for(const auto& pair : vecPar) {
		std::cout << pair.first << "," << pair.second <<'\n';
	}
}
