#include <iostream>
#include <fstream>

using std::cin;
using std::cout;


int main()
{
	std::ofstream out_file_1("File.txt");
	if (!out_file_1) {
		std::cout << "failed";
	}

	out_file_1 << "Hello, world. Nice to meet you. How are you, my friend?\n";
	out_file_1.close();

	std::ofstream out_file_2("File1.txt");
	if (!out_file_2) {
		std::cout << "failed";
	}

	out_file_2 << "I'm fine. Thank you. And you? Do you go anywhere today?\n";
	out_file_2.close();


	return 0;
}
