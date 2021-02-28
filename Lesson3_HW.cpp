#include <iostream>


int main () {
    const int a = 10;
    const int b = 5;
    const int c = 5;
    const int d = 6;
  
    std::cout << a*(b+(static_cast<float>(c)/d));

};