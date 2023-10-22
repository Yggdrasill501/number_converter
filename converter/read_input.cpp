//
// Created by Filip Žitný on 22/10/2023.
//
#include <iostream>
#include "converter.h"

std::string Converter::readInput() {
    std::string input;
    std::cout << "Enter a number: ";
    std::cin >> input;
    return input;
}
