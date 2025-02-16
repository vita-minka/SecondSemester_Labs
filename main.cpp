#include <iostream>
#include "mymath/mymath.h"
#include "mynumber/mynumber.h"


int main() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Я умею суммировать! Зацени 1+1= ";
    std::cout << mymath::sum(10, 32) << std::endl;

    std::cout << "А вот моё любимое число: ";
    mynumber::fav();
    std::cout << std::endl;

    std::cout << "И нелюбимое: ";
    mynumber::notFav();
    std::cout << std::endl;

    return 0;
}