#include <iostream>

int main(){
	unsigned long long x;
	std::cout << "Введите число ";
	std::cin >> x;

	unsigned long long sum = 0, prod = 1;
	do{
		sum += x%10;
		prod *= x%10;
		x /= 10;
	}while (x != 0);

	std::cout << sum << " " << prod << std::endl;

	return 0;
}
