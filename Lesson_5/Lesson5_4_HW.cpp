#include <iostream>

void shift_array (int array[], int n, int size_array){
	
	if (n==0){
         std::cout<<"Сдвига элементов массива не произведено";
				} else if (n<0){
	for (int i = n;i<0;i++){
			int first_el = array[0];
	for (int i = 0; i<size_array; i++){
			
				array[i]=array[i+1];
					};
				array[size_array -1] = first_el;
	};
	} else {
	for (int i = n;i>0;i--){
		int last_el = array[size_array -1];
	for (int i = size_array-1; i>=0;i--){
				array[i]=array[i-1];
					};
					array[0] = last_el;
			};
	};
};


int main()
{
int my_array[5]{1,2,3,4,5};
int n;
std::cout<<"Дан массив my_array[5]{1,2,3,4,5}\n Укажите на сколько позиций нужно сдвинуть каждый элемент: "; std::cin>> n;
int size_arr = sizeof(my_array)/sizeof(int);
shift_array(my_array,n,size_arr);
std::cout<<"После сдвига каждого элемента на "<<n<<" позиции(й), элементы массива выстроились следующим образом: "<<"{ "<<my_array[0]<<my_array[1]<<my_array[2]<<my_array[3]<<my_array[4]<<" }";
};