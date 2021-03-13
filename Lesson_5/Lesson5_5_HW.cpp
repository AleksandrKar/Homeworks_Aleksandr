#include <iostream>
using namespace std;
void change_array(int array[], int number_of_elements){

	for (int i=0; i<number_of_elements;i++){
		array[i]=!array[i];
		std::cout<<array[i];
	};
};

int main()
{
	int first_array [10] {1,1,0,0,1,0,1,1,0,0};
	int n=7;
    change_array(first_array, n);
}