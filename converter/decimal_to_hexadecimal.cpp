//
// Created by Filip Žitný on 22/10/2023.
//
#include "converter.h"
#include <iostream>

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