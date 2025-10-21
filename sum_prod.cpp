#include <iostream>

int main(int argc, char* argv[]){
	unsigned long long sum = 0, prod = 1;
	if (argc > 1){
		char *number = argv[1];
		int index = 0;
		while (number[index] != '\0' && index  < 11){
			if (number[index] >= '0' && number[index]<='9'){
				sum += (number[index]-'0');
				prod *= (number[index]-'0');
			}else {
				std::cout << "Wrong number" << std::endl;
				return 1;
			}
			++index;
		}
		std::cout << sum << " " << prod << std::endl;
	}else{

		unsigned long long x;
		std::cout << "Введите число ";
		std::cin >> x;

		do{
			sum += x%10;
			prod *= x%10;
			x /= 10;
		}while (x != 0);

		std::cout << sum << " " << prod << std::endl;
	}

	return 0;
}
