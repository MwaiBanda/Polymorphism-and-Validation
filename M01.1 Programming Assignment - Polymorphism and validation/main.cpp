//
//  main.cpp
//  M01.1 Programming Assignment - Polymorphism and validation
//
//  Created by Mwai Banda on 3/25/21.
//

#include <iostream>
#include "romanType.hpp"
#include <string>

#define println(x) std::cout << x << std::endl
#define print(x) std::cout << x ;
#define input(x,y) std::cout << y; std::getline(cin, x)
#define clearBuffer() cin.clear(); cin.ignore(100,'\n')

using namespace std;
int main() {
    string retry;
    string tryAgain;
    do {
        string userInput;
        int selection;
        input(userInput, "Enter roman numeral to convert to decimal: ");
        transform(userInput.begin(), userInput.end(), userInput.begin(), ::toupper);
        
        RomanType romanNumeral(userInput);
        do {
            println("Choose display option: ");
            println("1. Decimal Number");
            println("2. Roman Numeral");
            print("Enter option number: ");
            cin >> selection;
            switch (selection) {
                case 1:
                    println(romanNumeral.toDecimal());
                    break;
                case 2:
                    println(romanNumeral.toRomanNumeral());
                    break;
            }
            clearBuffer();
            input(tryAgain, "Do you want to try a different option? Enter Y for Yes & N for No: ");
        } while (tryAgain == "Y" || tryAgain == "y");
        input(retry, "Do you want to quit the program? Enter Y for Yes & N for No: ");
    } while (retry == "N" || retry == "n");
    
    return 0;
}
