#include "conversao.h"
#include <iostream>

namespace conversores {

    int conversor_celsius_para_fahrenheit(int celsius) {
        int resultado_fahrenheit = (celsius * (9.0/5.0)) + 32;
        return resultado_fahrenheit;
    }

    int conversor_fahrenheit_para_celsius(int fahrenheit) {
        int resultado_celsius = (fahrenheit - 32) * (5.0/9.0);
        return resultado_celsius;
    }
}