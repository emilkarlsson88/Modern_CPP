#include<functional>
#include<iostream>
#include<memory>
#include<assert.h> // <- modernize-deprecated-headers
int add(int x, int y) { return x + y; }

class MyPair {
	private:
		int m_one;
		int m_two;
	public:
		MyPair(int t_one, int t_two) :
		       	m_one(t_one), m_two(t_two) {};
		void print() {
			std::cout 
				<< m_one 
				<< " + " 
				<< m_two 
				<< " = " 
				<< m_one + m_two << '\n';
		}
};

int main() {
	// modernize-avoid-bind
	int x = 2;
	auto clj = std::bind(add, x, std::placeholders::_1);
	std::cout << "2 + 3 = " << clj(3) << '\n';

	// modernize-loop-convert
	int arr[] = { 1, 2, 3 };
	for (int i = 0; i < 3; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << '\n';
	std::vector<int> vec = { 1, 2, 3 };
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << '\n';

	// modernize-make-shared
	auto my_ptr = std::shared_ptr<MyPair>(new MyPair(1, 2));
	my_ptr->print();

}
