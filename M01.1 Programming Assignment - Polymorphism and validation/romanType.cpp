//
//  romanType.cpp
//  M01.1 Programming Assignment - Polymorphism and validation
//
//  Created by Mwai Banda on 3/25/21.
//

#include "romanType.hpp"
#include <iostream>

RomanType::RomanType(string romanNumeral){
    this->romanNumeral = romanNumeral;
}

RomanType::~RomanType(){
    printf("\nTask complete: converted %s to %d \n", romanNumeral.c_str(), decimalNumber);
}
int RomanType::toDecimal() {
    decimalNumber = 0;

    for (int i = 0; i <= romanNumeral.length() - 1; i++) {
        if (returnNumeralValue(romanNumeral[i]) >= returnNumeralValue(romanNumeral[i + 1])) {
            decimalNumber += returnNumeralValue(romanNumeral[i]);
        } else {
            decimalNumber -= returnNumeralValue(romanNumeral[i]);
        }
    }
    return decimalNumber;
}

string RomanType::toRomanNumeral() {
    return romanNumeral;
}

int RomanType::returnNumeralValue(char romanNumeral){
    enum RomanNumerals {
        M = 1000,
        D = 500,
        C = 100,
        L = 50,
        X = 10,
        V = 5,
        I = 1
    };
    int value = 0;
    
    if (romanNumeral == 'M') {
        value = RomanNumerals::M;
    } else if (romanNumeral == 'D') {
        value = RomanNumerals::D;
    } else if (romanNumeral == 'C') {
        value = RomanNumerals::C;
    } else if (romanNumeral == 'L') {
        value = RomanNumerals::L;
    } else if (romanNumeral == 'X') {
        value = RomanNumerals::X;
    } else if (romanNumeral == 'V') {
        value = RomanNumerals::V;
    } else if (romanNumeral == 'I') {
        value = RomanNumerals::I;
    }
    return value;
}

