#include <iostream>

void checkbalance (int array[], int size_of_arr){
	int sum_of_array =0;
	for (int i=0;i<size_of_arr;i++){
		sum_of_array+=array[i];
		};
		int left_sum =0;
		int right_sum;
		int i =0;
		for (i;i<size_of_arr;i++){
			left_sum+=array[i];
		right_sum=sum_of_array - left_sum;
		if (left_sum==right_sum)break; 
	};
	if (left_sum==right_sum){
		std::cout<<"True";
	} else {
			std::cout<<"False";
		};
		
	
};
int main(){
	int my_array[6]{5,1,1,1,1,5};
	int size_arr = sizeof(my_array)/sizeof(int);
	checkbalance(my_array, size_arr);
};