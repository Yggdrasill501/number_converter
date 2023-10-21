//
// Created by Filip Žitný on 21/10/2023.
//

#ifndef NUMBER_CONVERTER_CONVERTER_H
#define NUMBER_CONVERTER_CONVERTER_H

#include <iostream>
#include <string>

class Converter {
    std::string hexadecimal;
    int decimal;

    std::string decimalToHexadecimal(int &decimal);
    int hexadecimalToDecimal(std::string hexadecimal)

public:
    std::string readInput();
    void userInterface();
    void printNumber();
};

#endif //NUMBER_CONVERTER_CONVERTER_H
