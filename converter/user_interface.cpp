//
// Created by Filip Žitný on 22/10/2023.
//
#include "converter.h"
#include <iostream>

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
            printNumber(hexadecimal);
        } catch (const std::exception &e) {
            std::cerr << "Invalid input. Please enter a valid decimal number." << std::endl;
        }

    }
    else if(choice == 2){
        std::string input = readInput();
        decimal = hexadecimalToDecimal(input);
        printNumber(int decimal);
    }
    else{
        std::cout << "Wrong choice. Please enter 1 or 2." << std::endl;
    }
}