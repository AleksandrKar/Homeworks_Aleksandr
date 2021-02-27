#include <iostream>


int main () {

/*Объявление и инициализация переменных*/
int x = 3;
std::string my_name = "Alexandr";
bool result = true;
unsigned int y = 138;
signed z = -138;
char symbol = 'A';
float Pi = 3.1415;
uint32_t f = 100;

/*Перечисление с возможными вариантами для игру крестики-нолики*/
enum CellContent{Cross, Zero};

/*Массив, содержащий значения такого перечисления*/
CellContent cross_zero_board[9]{};


/*Структура данных поля для игры*/
struct cross_zero_game {
    int x;
    int y;
    CellContent type;
    CellContent cross_zero_board[9]{};
};

}