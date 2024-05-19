#include <iostream>

void OutputEvenNumbers(int finder, const int stopFind) {
	for (int i = 0; i < stopFind/2; i++) {
		std::cout << finder << std::endl;
		finder += 2;
	}
}



int main(){
	int first_num = 2;
	const int N = 30;


	// Output of even or odd numbers!
	OutputEvenNumbers(first_num, N);
	std::cout << "\n\n";
	OutputEvenNumbers(first_num - 1, N);
}
