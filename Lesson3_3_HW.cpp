#include <iosream>

int main () {
    extern const int a = 10;
    extern const int b = 5;
    extern const int c = 5;
    extern const int d = 6;
  
    std::cout << a*(b+(static_cast<float>(c)/d));

};