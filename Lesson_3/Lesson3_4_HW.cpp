#include <iostream>


int main () {
    int array[3][3][3]={0}, *ptr;
    array[1][1][1]=5;
    ptr = &array[1][1][1];

    std::cout<<*ptr;

};