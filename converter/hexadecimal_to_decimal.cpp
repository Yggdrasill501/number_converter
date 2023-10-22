//
// Created by Filip Žitný on 22/10/2023.
//
#include "converter.h"
#include <cctype>

int Converter::hexadecimalToDecimal(std::string &str) {
    int decimalResult = 0;
    int baseValue = 1;

    for (char &c : str) {
        c = std::toupper(c);
    }

    for (int i = str.size() - 1; i >= 0; i--) {
        char hexChar = str[i];

        if (hexChar >= '0' && hexChar <= '9') {
            decimalResult += (hexChar - '0') * baseValue;
        } else if (hexChar >= 'A' && hexChar <= 'F') {
            decimalResult += (hexChar - 'A' + 10) * baseValue;
        } else {
            std::cerr << "Invalid hex character: " << hexChar << std::endl;
            return -1;
        }

        baseValue *= 16;
        return baseValue;
    }
}