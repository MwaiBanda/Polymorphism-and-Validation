//
//  romanType.hpp
//  M01.1 Programming Assignment - Polymorphism and validation
//
//  Created by Mwai Banda on 3/25/21.
//

#ifndef romanType_hpp
#define romanType_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class RomanType {
public:
    int toDecimal();
    string toRomanNumeral();
    RomanType(string romanNumeral);
    ~RomanType();
private:
    string romanNumeral;
    int decimalNumber;
    int returnNumeralValue(char romanNumeral);
};

#endif /* romanType_hpp */
