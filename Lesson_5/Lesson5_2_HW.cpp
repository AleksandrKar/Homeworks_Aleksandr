#include <iostream>

void new_array(int array[], int size_of_array){
	array[0]=1;
	for (int i =0;i<size_of_array;i++){
		array[i+1]=array[i]+3;
		std::cout<<array[i]<<", ";
		};
	};
int main(){
	int my_array [8]{};
	new_array(my_array, 8);
};