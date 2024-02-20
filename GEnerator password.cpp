#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

const char lower[] = "abcdefghijklmnopqrstuvwxyz";
const char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char symbols[] = "_*&^%$#@!/|><.,`";
const char digits[] = "0123456789";

int main() {
    int length = 0;
    cout << "Enter length of password: ";
    cin >> length;

    int useLower, useUpper, useSymbols, useDigits; 
    string customLower, customUpper, customSymbols, customDigits;

    cout << "ADD lowercase letters? (1-YES/ 0-NO ): ";
    cin >> useLower; 
    if (useLower == 1) {
        cout << "Enter specific lowercase letters: ";
        cin >> customLower;
    }

    cout << "ADD uppercase letters? (1-YES/ 0-NO): ";
    cin >> useUpper;
    if (useUpper == 1) {
        cout << "Enter specific uppercase letters: ";
        cin >> customUpper;
    }

    cout << "ADD symbols? (1-YES/ 0-NO): ";
    cin >> useSymbols;
    if (useSymbols == 1) {
        cout << "Enter specific symbols: ";
        cin >> customSymbols;
    }

    cout << "ADD digits? (1-YES/ 0-NO): ";
    cin >> useDigits;
    if (useDigits == 1) {
        cout << "Enter specific digits: ";
        cin >> customDigits;
    }

    string characters = "";
    characters += customLower;
    characters += customUpper;
    characters += customSymbols;
    characters += customDigits;

    int i=0;
    
    if (!customLower.empty()) {cout << customLower[rand() % customLower.length()]; i++;}
    if (!customUpper.empty()) {cout << customUpper[rand() % customUpper.length()]; i++;}
    if (!customSymbols.empty()) {cout << customSymbols[rand() % customSymbols.length()]; i++;}
    if (!customDigits.empty()) {cout << customDigits[rand() % customDigits.length()]; i++;}


    int string_length = characters.size();
    for (; i < length; ++i) {
        cout << characters[rand() % string_length];
    }

    if (length <= 4) {
        cout << endl << "Password is weak";
    }
    else if (length > 4 && length <= 7) {
        cout << endl << "Password is normal";
    }
    else if (length > 7) {
        cout << endl << "Password is strong";
    }

    return 0;
}
