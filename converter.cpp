//
// Created by Filip Žitný on 21/10/2023.
//
#include "converter.h"
#include <iostream>
#include <string>

std::string Converter::readInput() {
    std::string input;
    std::cout << "Enter a number: ";
    std::cin >> input;
    return input;
}

void Converter::userInterface(){
    int choice;
    std::cout << "Choose if you want to convert from decimal to hexadecimal or from hexadecimal to decimal";
    std::cout << "1. Decimal to hexadecimal" << std::endl;
    std::cout << "2. Hexadecimal to decimal" << std::endl;
    std::cin >> choice;

    if (choice == 1){
        readInput();
        decimalToHexadecimal(decimal);
    }
    else if(choice == 2){
        readInput();
        hexadecimalToDecimal(hexadecimal);
    }
    else{
        std::cout << "Wrong input" << std::endl;
    }

}


#include "converter.h"
