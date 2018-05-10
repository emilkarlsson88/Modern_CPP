#include<assert.h>
#include<iostream>
double Div(double numerator, double denominator) {
	assert(denominator != 0.0);
	return numerator / denominator;

}

int main() {
	std::cout << Div(4.0,2.0) << '\n';
}
