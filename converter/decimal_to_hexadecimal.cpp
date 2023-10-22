//
// Created by Filip Žitný on 22/10/2023.
//
#include "converter.h"

std::string Converter::decimalToHexadecimal(int &i) {
    if (i == 0) {
        return "0";
    }

    std::string hexResult;

    while (i > 0) {
        int remainder = i % 16;
        hexResult += hexChars[remainder];
        i /= 16;
    }

    std::reverse(hexResult.begin(), hexResult.end());

    return hexResult;
}