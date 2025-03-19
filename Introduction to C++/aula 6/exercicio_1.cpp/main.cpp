#include <iostream>
#include "conversao.h"

int main() {
    std::cout <<"10 C em F é: " << conversores::conversor_celsius_para_fahrenheit(10) << std::endl;
    std::cout << "1F em C é: " << conversores::conversor_fahrenheit_para_celsius(1) << std::endl;
    return 0;
}