//
// Created by Filip Žitný on 21/10/2023.
//
#include "converter.h"
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>


std::string Converter::decimalToHexadecimal(int &decimal) {
    if (decimal == 0) {
        return "0";
    }

    std::string hexResult;

    while (decimal > 0) {
        int remainder = decimal % 16;
        hexResult += hexChars[remainder];
        decimal /= 16;
    }

    std::reverse(hexResult.begin(), hexResult.end());

    return hexResult;
}

int Converter::hexadecimalToDecimal(std::string &hexadecimal) {
    int decimalResult = 0;
    int baseValue = 1;

    for (char &c : hexadecimal) {
        c = std::toupper(c);
    }

    for (int i = hexadecimal.size() - 1; i >= 0; i--) {
        char hexChar = hexadecimal[i];

        if (hexChar >= '0' && hexChar <= '9') {
            decimalResult += (hexChar - '0') * baseValue;
        } else if (hexChar >= 'A' && hexChar <= 'F') {
            decimalResult += (hexChar - 'A' + 10) * baseValue;
        } else {
            std::cerr << "Invalid hex character: " << hexChar << std::endl;
            return -1;
            break;
        }

        baseValue *= 16;
    return decimalResult;
    }

    return decimalResult;
}

void Converter::printNumber(std::string &number) {
    std::cout << "Result: " << number << std::endl;
}

void Converter::printNumber(int number) {
    std::cout << "Result: " << number << std::endl;
}

#include "converter.h"
