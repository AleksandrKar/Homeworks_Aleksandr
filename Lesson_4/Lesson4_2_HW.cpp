#include <iostream>

int main()
{
	int a;
	int c = 1;
	std::cout<<"Введите целое число: ";
	std::cin>> a;
	int b = a-1;
	while(c!=0){
		b--;
		c = a%b;
	}
	if (b==1) {
		std::cout<<"Число простое";
	}
	else {
		std::cout<<"Число не простое";
	};
}