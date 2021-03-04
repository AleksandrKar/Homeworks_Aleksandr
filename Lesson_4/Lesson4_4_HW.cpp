#include <iostream>

int main()
{
	int a;
	std::cout<<"Введите год в формате гггг: ";
	std::cin>>a;
	int b =a%100;
	int c =a%400;
	int d=a%4;
	
	
	if (c==0){
		std::cout<< a<< " год - високосный";}
		else if ((d==0)&&(b!=0)){
			std::cout<< a<< " год - високосный";
			}
			else{
				std::cout<< a<< " год - не високосный";
				};
}