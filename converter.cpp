//
// Created by Filip Žitný on 21/10/2023.
//
#include "converter.h"
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

std::string Converter::readInput() {
    std::string input;
    std::cout << "Enter a number: ";
    std::cin >> input;
    return input;
}

void Converter::userInterface(){
    int choice;
    std::cout << "Choose if you want to convert from decimal to hexadecimal or from hexadecimal to decimal:" << std::endl;
    std::cout << "1. Decimal to hexadecimal" << std::endl;
    std::cout << "2. Hexadecimal to decimal" << std::endl;
    std::cin >> choice;

    if (choice == 1){
        std::string input = readInput();
        try {
            decimal = std::stoi(input);
            hexadecimal = decimalToHexadecimal(decimal);
            std::cout << "Hexadecimal representation: " << hexadecimal << std::endl;
        } catch (const std::exception &e) {
            std::cerr << "Invalid input. Please enter a valid decimal number." << std::endl;
        }

    }
    else if(choice == 2){
        std::string input = readInput();
        decimal = hexadecimalToDecimal(input);
        if (decimal != -1) {
            std::cout << "Decimal representation: " << decimal << std::endl;
        } else {
            std::cerr << "Invalid input. Please enter a valid hexadecimal number." << std::endl;
        }
    }
    else{
        std::cout << "Wrong choice. Please enter 1 or 2." << std::endl;
    }
}

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
        }

        baseValue *= 16;
    }

    return decimalResult;
}

#include "converter.h"
